#include <gst/gst.h>

int 
int main(int argc, char const *argv[])
{
    GstElement * element;
    GstElementFactory * facroty;

    // init Gstreamer
    gst_init(*argc, *argv);

    // create element
    factory = gst_element_factory_find("fakesrc");

    if (!factory) {
        g_print("failed to find factory of type 'fakesrc' \n")
    }

    element = gst_element_factory_create(factory, "source");

    // verify
    if (!element) {
        g_print("failed to create element of type 'fakesrc' \n");
        return -1;
    }

    // clean
    gst_object_unref(GST_OBJECT(element));
    gst_object_unref(GST_OBJECT(factory));
    
    return 0;
}
