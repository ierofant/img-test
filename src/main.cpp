#include <iostream>
#include <boost/gil/gil_all.hpp>
#include <boost/gil/extension/io/jpeg_io.hpp>

namespace gil = boost::gil;

int main(int argc, char *argv[]) {

    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::cout << "Read image: " << argv[1] << std::endl;
    gil::gray8_image_t origin_image, image(100, 100);
    gil::jpeg_read_and_convert_image(argv[1], origin_image);
    gil::resize(gil::const_view(origin_image), gil::view(image), );

    return 0;
}