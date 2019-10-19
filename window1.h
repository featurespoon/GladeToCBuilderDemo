#ifndef window1_h
#define window1_h

#include <gtk/gtk.h>
#include "window1_gui.h"
#include "aboutdialog1_gui.h"

typedef struct tag_Window1
{
	Window1Gui *gui;
	Aboutdialog1Gui *aboutdialog1gui;
} Window1;

void window1_terminate (Window1 *window1);

#endif
