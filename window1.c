#include <gtk/gtk.h>
#include "window1.h"
#include "window1_gui.h"
#include "aboutdialog1_gui.h"

void initialise_window1 (Window1Gui *window1)
{

	return;
}


	/*  Signal handlers for Dialogue aboutdialog1 */
	/*    Accelerator handlers   */
gboolean
copy_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */

	return TRUE;
}

gboolean
cut_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */

	return TRUE;
}

gboolean
new_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */

	return TRUE;
}

gboolean
open_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */

	return TRUE;
}

gboolean
paste_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */

	return TRUE;
}

gboolean
save_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */

	return TRUE;
}

gboolean
toolbutton1_click (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */

	return TRUE;
}


	/*  Model populaters */

