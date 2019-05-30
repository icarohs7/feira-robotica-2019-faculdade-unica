package br.com.luminaspargere.mazerunner.domain.videomanipulation

import br.com.luminaspargere.mazerunner.domain.loop
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.flow.flowOn
import org.opencv.core.Mat
import org.opencv.videoio.VideoCapture


class VideoCapture {
    private val videoFeed by lazy { VideoCapture() }

    fun cameraImageFeed(): Flow<Mat> {
        open()
        val frame = Mat()
        return flow {
            if (videoFeed.isOpened) loop {
                videoFeed.read(frame)
                emit(frame)
            }
            close()
        }.flowOn(Dispatchers.Default)
    }

    fun open() {
        videoFeed.open(0)
    }

    fun close() {
        videoFeed.release()
    }
}