#include <iostream>
#include <memory>
#include <libopenshot/FFmpegReader.h>
#include <libopenshot/FFmpegWriter.h>

using namespace openshot;

int main() {
    std::string input_file = "/home/netra/libopenshot/video_ref.mp4";
    std::string output_file = "demo_output.mp4";

    auto reader = std::make_shared<FFmpegReader>(input_file);

    FFmpegWriter exporter(output_file);
    exporter.SetVideoOptions(reader->info.width,
                             reader->info.height,
                             reader->info.fps,
                             AV_PIX_FMT_YUV420P);

    exporter.WriteFrame(reader.get(), 0, reader->info().frames);
    exporter.Close();

    std::cout << "Demo video generated: " << output_file << std::endl;
    return 0;
}

