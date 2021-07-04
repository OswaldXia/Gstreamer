#include <gst/gst.h>

int 
int main(int argc, char const *argv[])
{
    GstElement * element;

    // init Gstreamer
    gst_init(*argc, *argv);

    // create element
    element = gst_element_factory_make("fakesrc", "source");

    // verify
    if (!element) {
        g_print("failed to create element of type 'fakesrc' \n");
        return -1;
    }

    // clean
    gst_object_unref(GST_OBJECT(element));
    return 0;
}
