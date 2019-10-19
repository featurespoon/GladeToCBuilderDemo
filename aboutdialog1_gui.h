#ifndef aboutdialog1_gui_h
#define aboutdialog1_gui_h

#include <gtk/gtk.h>

typedef struct tag_Aboutdialog1Gui
{
	GtkAccelGroup        *accel_group;
	GtkAboutDialog       *aboutdialog1;
	GtkBox               *hbox1;
	GtkButtonBox         *buttonbox1;
} Aboutdialog1Gui;

Aboutdialog1Gui *aboutdialog1_gui_create (gpointer owner);

void aboutdialog1_gui_destroy (Aboutdialog1Gui *aboutdialog1);

#endif
