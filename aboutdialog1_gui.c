#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>
#include <glib.h>

/*                Generated from D:/Gtk3/glade/demo-builder.glade                 */

#include "aboutdialog1_gui.h"
#include "window1.h"

Aboutdialog1Gui *aboutdialog1_gui_create (gpointer owner)
{
Aboutdialog1Gui *gui = g_new0 (Aboutdialog1Gui, 1);

	gui->accel_group = gtk_accel_group_new ();
	g_object_set_data (G_OBJECT (gui->accel_group), "owner", owner);

	/* Widget construction */
	/* Widgets at level 0 */
	/* Widgets at level 1 */
	gui->aboutdialog1 = (GtkAboutDialog*) gtk_about_dialog_new ();
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->aboutdialog1), FALSE);
	gtk_window_set_type_hint(GTK_WINDOW(gui->aboutdialog1),GDK_WINDOW_TYPE_HINT_NORMAL );
	gtk_about_dialog_set_program_name(GTK_ABOUT_DIALOG(gui->aboutdialog1),"Builder demo" );
	gtk_about_dialog_set_logo_icon_name(GTK_ABOUT_DIALOG(gui->aboutdialog1),"gtk3-demo" );
	g_object_set_data (G_OBJECT (gui->aboutdialog1), "owner", owner);

	/* Widgets at level 2 */
	gui->hbox1 = (GtkBox*) gtk_dialog_get_content_area (GTK_DIALOG(gui->aboutdialog1));

	/* Widgets at level 3 */

	/* Accelerators */

	gtk_window_add_accel_group (GTK_WINDOW(gui->aboutdialog1), gui->accel_group);


	/* Signal connections */
	return gui;
}

void aboutdialog1_gui_destroy (Aboutdialog1Gui *gui)
{
	gtk_widget_destroy (GTK_WIDGET (gui->aboutdialog1));
	g_free (gui);
	return;
}

