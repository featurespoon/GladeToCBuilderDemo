#include <gtk/gtk.h>
#include "window1.h"
#include "window1_gui.h"
#include "aboutdialog1_gui.h"

void
quit_activate (GSimpleAction *simple,
                       GVariant      *parameter,
                       gpointer       user_data);

void
help_activate (GSimpleAction *simple,
                   GVariant      *parameter,
	               gpointer                  user_data);

void
about_activate (GSimpleAction *simple,
                    GVariant      *parameter,
	                gpointer                  user_data);


static GActionEntry win_entries[] = {
  { "quit", quit_activate, "s", NULL, NULL },
  { "about", about_activate, "s", NULL, NULL },
  { "help", help_activate, "s", NULL, NULL }
};

void initialise_window1 (Window1Gui *window1)
{
GActionGroup *actions;
GtkWindow *window = window1->window1;
	  actions = (GActionGroup*)g_simple_action_group_new ();
      g_action_map_add_action_entries (G_ACTION_MAP (actions),
                                       win_entries, G_N_ELEMENTS (win_entries),
                                       window);
      gtk_widget_insert_action_group (GTK_WIDGET(window), "win", actions);
	return;
}

void
quit_activate (GSimpleAction *simple,
                    GVariant      *parameter,
	gpointer                  user_data)

{
GtkWindow *top_window = (GtkWindow *) user_data;
	Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (top_window), "owner"); 
	window1_terminate(prog);
	return;
}

void
help_activate (GSimpleAction *simple,
                    GVariant      *parameter,
	gpointer                  user_data)

{
	/* Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (widget), "owner"); */
	g_print ("Help not available\n");
	return;
}

void
about_activate (GSimpleAction *simple,
                    GVariant      *parameter,
	gpointer                  user_data)

{
GtkWindow *top_window = (GtkWindow *) user_data;
	Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (top_window), "owner");
    GtkAboutDialog *about_dlg = prog->aboutdialog1gui->aboutdialog1;
    gtk_dialog_run (GTK_DIALOG (about_dlg));
    gtk_widget_hide (GTK_WIDGET(about_dlg));
	return;
}


void
on_open_item_activate (GtkMenuItem* widget,
	gpointer                  user_data)

{
	/* Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (widget), "owner"); */
	g_print ("on open item\n");
	return;
}

void
on_save_as_item_activate (GtkMenuItem* widget,
	gpointer                  user_data)

{
	/* Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (widget), "owner"); */
	g_print ("on_save_as_item_activate\n");
	return;
}

	/*  Signal handlers for Dialogue aboutdialog1 */

gboolean
copy_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */
	g_print ("copy item\n");
	return TRUE;  // accelerator activated
}

gboolean
cut_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
GtkMenuItem          *cut_item;
GtkWindow            *cut_window;
	Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); 
	cut_item = window1->gui->cut_item;
	g_print("menu item name: %s\n",gtk_menu_item_get_label(GTK_MENU_ITEM(cut_item)));
	cut_window = (GtkWindow *) acceleratable;
	g_print("window title: %s\n",gtk_window_get_title(GTK_WINDOW(cut_window)));
	return TRUE;
}

gboolean
new_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */
	g_print ("new item\n");
	return TRUE;
}

gboolean
open_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */
	g_print ("open item\n");
	return TRUE;
}

gboolean
paste_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */
	g_print ("paste item\n");
	return TRUE;
}

gboolean
save_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)
{
	/* Window1 *window1 = (Window1*) g_object_get_data (G_OBJECT (acceleratable), "owner"); */
	g_print ("save_item_activate\n");
	return TRUE;
}

void
on_save_item_activate (GtkMenuItem* save_item,
	gpointer                  user_data)
{
	g_print ("on save item activate\n");
	return;
}	

gboolean
toolbutton1_click (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier)

{
	/* Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (widget), "owner"); */
	g_print ("toolbutton1 click\n");
	return TRUE;
}

void
toolbutton2_click (GtkToolButton* widget,
	gpointer                  user_data)

{
	/* Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (widget), "owner"); */
	g_print ("Second toolbutton click\n");
	return;
}

void
help_item_activate (GtkMenuItem* widget,
	gpointer                  user_data)

{
	/* Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (widget), "owner"); */
	g_print ("help_item_activate\n");
	return;
}

void
about_item_activate (GtkMenuItem* widget,
	gpointer                  user_data)

{
	/* Window1 *prog = (Window1*) g_object_get_data (G_OBJECT (widget), "owner"); */
	g_print ("about_item_activate\n");
	return;
}


	/*  Model populaters */

enum
{
	COL_GCHARARRAY = 0,
	COL_GCHARARRAY1,
	COL_GINT,
	COL_GCHARARRAY2,
	NUMCOLS_LISTSTORE1
};


void populate_liststore1(Window1Gui *gui,
		 GtkTreeModel*	 liststore)
{
GtkTreeIter    iter;
GtkListStore  *store = (GtkListStore *) liststore;

	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter,
		0,"John",
		1,"Doe",
		2,25,
		3,"This is the John Doe row",
		-1);

	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter,
		0,"Mary",
		1,"Unknown",
		2,50,
		3,"This is the Mary Unknown row",
		-1);

	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter,
		0,"Tommy",
		1,"Atkins",
		2,35,
		3,"This is the Tommy Atkins row.",
		-1);

	return;
}

