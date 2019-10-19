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

#include "window1_gui.h"

Window1Gui *window1_gui_create (gpointer owner)
{
Window1Gui *gui = g_new0 (Window1Gui, 1);

	gui->accel_group = gtk_accel_group_new ();
	g_object_set_data (G_OBJECT (gui->accel_group), "owner", owner);

	/* Widget construction */
	/* Widgets at level 0 */
	gui->liststore1 = (GtkListStore*) gtk_list_store_new(4,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_INT,G_TYPE_STRING );
	g_object_set_data (G_OBJECT (gui->liststore1), "owner", owner);

	gui->accelgroup1 = (GtkAccelGroup*) gtk_accel_group_new ();
	g_object_set_data (G_OBJECT (gui->accelgroup1), "owner", owner);

	/* Widgets at level 1 */
	gui->window1 = (GtkWindow*) gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->window1), FALSE);
	gtk_window_set_title(GTK_WINDOW(gui->window1),"Builder" );
	g_object_set(G_OBJECT(gui->window1),"default_width", 440,NULL);
	g_object_set(G_OBJECT(gui->window1),"default_height", 250,NULL);
	g_object_set_data (G_OBJECT (gui->window1), "owner", owner);

	/* Widgets at level 2 */
	gui->vbox1 = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL,0);
	gtk_container_add (GTK_CONTAINER (gui->window1),
	                   GTK_WIDGET (gui->vbox1));
	gtk_widget_show (GTK_WIDGET (gui->vbox1));
	g_object_set_data (G_OBJECT (gui->vbox1), "owner", owner);

	/* Widgets at level 3 */
	gui->menubar1 = (GtkMenuBar*) gtk_menu_bar_new ();
	gtk_box_pack_start (GTK_BOX (gui->vbox1), 
	                    GTK_WIDGET (gui->menubar1), FALSE, TRUE, 0);
	gtk_widget_show (GTK_WIDGET (gui->menubar1));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->menubar1), FALSE);
	g_object_set_data (G_OBJECT (gui->menubar1), "owner", owner);

	gui->toolbar1 = (GtkToolbar*) gtk_toolbar_new ();
	gtk_box_pack_start (GTK_BOX (gui->vbox1), 
	                    GTK_WIDGET (gui->toolbar1), FALSE, TRUE, 0);
	gtk_widget_show (GTK_WIDGET (gui->toolbar1));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->toolbar1), FALSE);
	g_object_set_data (G_OBJECT (gui->toolbar1), "owner", owner);

	gui->scrolledwindow1 = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
	gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(gui->scrolledwindow1),
		 GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
	gtk_box_pack_start (GTK_BOX (gui->vbox1), 
	                    GTK_WIDGET (gui->scrolledwindow1), TRUE, TRUE, 0);
	gtk_widget_show (GTK_WIDGET (gui->scrolledwindow1));
	gtk_scrolled_window_set_shadow_type (GTK_SCROLLED_WINDOW(gui->scrolledwindow1), GTK_SHADOW_IN);
	g_object_set_data (G_OBJECT (gui->scrolledwindow1), "owner", owner);

	gui->statusbar1 = (GtkStatusbar*) gtk_statusbar_new ();
	gtk_box_pack_start (GTK_BOX (gui->vbox1), 
	                    GTK_WIDGET (gui->statusbar1), FALSE, TRUE, 0);
	gtk_widget_show (GTK_WIDGET (gui->statusbar1));
	g_object_set_data (G_OBJECT (gui->statusbar1), "owner", owner);

	/* Widgets at level 4 */
	gui->menuitem1 = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_File");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->menubar1), GTK_WIDGET (gui->menuitem1));
	gtk_widget_show (GTK_WIDGET (gui->menuitem1));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->menuitem1), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->menuitem1), "_File");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->menuitem1),TRUE );
	g_object_set_data (G_OBJECT (gui->menuitem1), "owner", owner);

	gui->menuitem2 = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Edit");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->menubar1), GTK_WIDGET (gui->menuitem2));
	gtk_widget_show (GTK_WIDGET (gui->menuitem2));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->menuitem2), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->menuitem2), "_Edit");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->menuitem2),TRUE );
	g_object_set_data (G_OBJECT (gui->menuitem2), "owner", owner);

	gui->menuitem3 = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Help");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->menubar1), GTK_WIDGET (gui->menuitem3));
	gtk_widget_show (GTK_WIDGET (gui->menuitem3));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->menuitem3), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->menuitem3), "_Help");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->menuitem3),TRUE );
	g_object_set_data (G_OBJECT (gui->menuitem3), "owner", owner);

	gui->toolbutton1 = (GtkToolButton*) gtk_tool_button_new (NULL, NULL);
	gtk_toolbar_insert (GTK_TOOLBAR (gui->toolbar1),
	                    GTK_TOOL_ITEM (gui->toolbutton1), -1);
	gtk_widget_show (GTK_WIDGET (gui->toolbutton1));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->toolbutton1), FALSE);
	gtk_widget_set_tooltip_text ( GTK_WIDGET (gui->toolbutton1), "Create a new file");
	gtk_tool_button_set_label(GTK_TOOL_BUTTON(gui->toolbutton1),"New" );
	gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON (gui->toolbutton1), "document-new");
	g_object_set_data (G_OBJECT (gui->toolbutton1), "owner", owner);

	gui->toolbutton2 = (GtkToolButton*) gtk_tool_button_new (NULL, NULL);
	gtk_toolbar_insert (GTK_TOOLBAR (gui->toolbar1),
	                    GTK_TOOL_ITEM (gui->toolbutton2), -1);
	gtk_widget_show (GTK_WIDGET (gui->toolbutton2));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->toolbutton2), FALSE);
	gtk_widget_set_tooltip_text ( GTK_WIDGET (gui->toolbutton2), "Open a file");
	gtk_tool_button_set_label(GTK_TOOL_BUTTON(gui->toolbutton2),"Open" );
	gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON (gui->toolbutton2), "document-open");
	g_object_set_data (G_OBJECT (gui->toolbutton2), "owner", owner);

	gui->toolbutton3 = (GtkToolButton*) gtk_tool_button_new (NULL, NULL);
	gtk_toolbar_insert (GTK_TOOLBAR (gui->toolbar1),
	                    GTK_TOOL_ITEM (gui->toolbutton3), -1);
	gtk_widget_show (GTK_WIDGET (gui->toolbutton3));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->toolbutton3), FALSE);
	gtk_widget_set_tooltip_text ( GTK_WIDGET (gui->toolbutton3), "Save a file");
	gtk_tool_item_set_is_important (GTK_TOOL_ITEM (gui->toolbutton3), TRUE);
	gtk_tool_button_set_label(GTK_TOOL_BUTTON(gui->toolbutton3),"Save" );
	gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON (gui->toolbutton3), "document-save");
	g_object_set_data (G_OBJECT (gui->toolbutton3), "owner", owner);

	gui->separator2 = (GtkSeparatorToolItem*) gtk_separator_tool_item_new ();
	gtk_toolbar_insert (GTK_TOOLBAR (gui->toolbar1),
	                    GTK_TOOL_ITEM (gui->separator2), -1);
	gtk_widget_show (GTK_WIDGET (gui->separator2));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->separator2), FALSE);
	g_object_set_data (G_OBJECT (gui->separator2), "owner", owner);

	gui->toolbutton4 = (GtkToolButton*) gtk_tool_button_new (NULL, NULL);
	gtk_toolbar_insert (GTK_TOOLBAR (gui->toolbar1),
	                    GTK_TOOL_ITEM (gui->toolbutton4), -1);
	gtk_widget_show (GTK_WIDGET (gui->toolbutton4));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->toolbutton4), FALSE);
	gtk_widget_set_tooltip_text ( GTK_WIDGET (gui->toolbutton4), "Copy selected object into the clipboard");
	gtk_tool_button_set_label(GTK_TOOL_BUTTON(gui->toolbutton4),"Copy" );
	gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON (gui->toolbutton4), "edit-copy");
	g_object_set_data (G_OBJECT (gui->toolbutton4), "owner", owner);

	gui->toolbutton5 = (GtkToolButton*) gtk_tool_button_new (NULL, NULL);
	gtk_toolbar_insert (GTK_TOOLBAR (gui->toolbar1),
	                    GTK_TOOL_ITEM (gui->toolbutton5), -1);
	gtk_widget_show (GTK_WIDGET (gui->toolbutton5));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->toolbutton5), FALSE);
	gtk_widget_set_tooltip_text ( GTK_WIDGET (gui->toolbutton5), "Cut selected object into the clipboard");
	gtk_tool_button_set_label(GTK_TOOL_BUTTON(gui->toolbutton5),"Cut" );
	gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON (gui->toolbutton5), "edit-cut");
	g_object_set_data (G_OBJECT (gui->toolbutton5), "owner", owner);

	gui->toolbutton6 = (GtkToolButton*) gtk_tool_button_new (NULL, NULL);
	gtk_toolbar_insert (GTK_TOOLBAR (gui->toolbar1),
	                    GTK_TOOL_ITEM (gui->toolbutton6), -1);
	gtk_widget_show (GTK_WIDGET (gui->toolbutton6));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->toolbutton6), FALSE);
	gtk_widget_set_tooltip_text ( GTK_WIDGET (gui->toolbutton6), "Paste object from the clipboard");
	gtk_tool_button_set_label(GTK_TOOL_BUTTON(gui->toolbutton6),"Paste" );
	gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON (gui->toolbutton6), "edit-paste");
	g_object_set_data (G_OBJECT (gui->toolbutton6), "owner", owner);

	gui->treeview1 = (GtkTreeView *) gtk_tree_view_new_with_model(GTK_TREE_MODEL(gui->liststore1));
	gtk_container_add (GTK_CONTAINER (gui->scrolledwindow1),
	                   GTK_WIDGET (gui->treeview1));
	gtk_widget_show (GTK_WIDGET (gui->treeview1));
	gtk_tree_view_set_tooltip_column(GTK_TREE_VIEW(gui->treeview1),3 );
	g_object_set_data (G_OBJECT (gui->treeview1), "owner", owner);

	/* Widgets at level 5 */
	gui->submenu1 = (GtkMenu*) gtk_menu_new ();
	gtk_menu_item_set_submenu (GTK_MENU_ITEM (gui->menuitem1), GTK_WIDGET (gui->submenu1));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->submenu1), FALSE);
	g_object_set_data (G_OBJECT (gui->submenu1), "owner", owner);

	gui->submenu2 = (GtkMenu*) gtk_menu_new ();
	gtk_menu_item_set_submenu (GTK_MENU_ITEM (gui->menuitem2), GTK_WIDGET (gui->submenu2));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->submenu2), FALSE);
	g_object_set_data (G_OBJECT (gui->submenu2), "owner", owner);

	gui->submenu3 = (GtkMenu*) gtk_menu_new ();
	gtk_menu_item_set_submenu (GTK_MENU_ITEM (gui->menuitem3), GTK_WIDGET (gui->submenu3));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->submenu3), FALSE);
	g_object_set_data (G_OBJECT (gui->submenu3), "owner", owner);

	gui->treeselection1 = gtk_tree_view_get_selection (GTK_TREE_VIEW(gui->treeview1));
	gtk_tree_selection_set_mode (gui->treeselection1, GTK_SELECTION_SINGLE);
	g_object_set_data (G_OBJECT (gui->treeselection1), "owner", owner);

	gui->column1 = (GtkTreeViewColumn*) gtk_tree_view_column_new ();
	gtk_tree_view_append_column(GTK_TREE_VIEW(gui->treeview1), GTK_TREE_VIEW_COLUMN(gui->column1));
	gtk_tree_view_column_set_title(GTK_TREE_VIEW_COLUMN(gui->column1),"Name" );
	g_object_set_data (G_OBJECT (gui->column1), "owner", owner);

	gui->column2 = (GtkTreeViewColumn*) gtk_tree_view_column_new ();
	gtk_tree_view_append_column(GTK_TREE_VIEW(gui->treeview1), GTK_TREE_VIEW_COLUMN(gui->column2));
	gtk_tree_view_column_set_title(GTK_TREE_VIEW_COLUMN(gui->column2),"Surname" );
	g_object_set_data (G_OBJECT (gui->column2), "owner", owner);

	gui->column3 = (GtkTreeViewColumn*) gtk_tree_view_column_new ();
	gtk_tree_view_append_column(GTK_TREE_VIEW(gui->treeview1), GTK_TREE_VIEW_COLUMN(gui->column3));
	gtk_tree_view_column_set_title(GTK_TREE_VIEW_COLUMN(gui->column3),"Age" );
	g_object_set_data (G_OBJECT (gui->column3), "owner", owner);

	/* Widgets at level 6 */
	gui->new_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_New");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu1), GTK_WIDGET (gui->new_item));
	gtk_widget_show (GTK_WIDGET (gui->new_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->new_item), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->new_item), "_New");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->new_item),TRUE );
	g_object_set_data (G_OBJECT (gui->new_item), "owner", owner);

	gui->open_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Open");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu1), GTK_WIDGET (gui->open_item));
	gtk_widget_show (GTK_WIDGET (gui->open_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->open_item), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->open_item), "_Open");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->open_item),TRUE );
	g_object_set_data (G_OBJECT (gui->open_item), "owner", owner);

	gui->save_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Save");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu1), GTK_WIDGET (gui->save_item));
	gtk_widget_show (GTK_WIDGET (gui->save_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->save_item), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->save_item), "_Save");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->save_item),TRUE );
	g_object_set_data (G_OBJECT (gui->save_item), "owner", owner);

	gui->save_as_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("Save _As");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu1), GTK_WIDGET (gui->save_as_item));
	gtk_widget_show (GTK_WIDGET (gui->save_as_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->save_as_item), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->save_as_item), "Save _As");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->save_as_item),TRUE );
	g_object_set_data (G_OBJECT (gui->save_as_item), "owner", owner);

	gui->separator1 = (GtkSeparatorMenuItem*) gtk_separator_menu_item_new ();
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu1), GTK_WIDGET (gui->separator1));
	gtk_widget_set_sensitive (GTK_WIDGET (gui->separator1), TRUE);
	gtk_widget_show (GTK_WIDGET (gui->separator1));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->separator1), FALSE);
	g_object_set_data (G_OBJECT (gui->separator1), "owner", owner);

	gui->quit_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Quit");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu1), GTK_WIDGET (gui->quit_item));
	gtk_widget_show (GTK_WIDGET (gui->quit_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->quit_item), FALSE);
	gtk_actionable_set_detailed_action_name(GTK_ACTIONABLE(gui->quit_item), "win.quit::_Quit");
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->quit_item), "_Quit");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->quit_item),TRUE );
	g_object_set_data (G_OBJECT (gui->quit_item), "owner", owner);

	gui->copy_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Copy");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu2), GTK_WIDGET (gui->copy_item));
	gtk_widget_show (GTK_WIDGET (gui->copy_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->copy_item), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->copy_item), "_Copy");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->copy_item),TRUE );
	g_object_set_data (G_OBJECT (gui->copy_item), "owner", owner);

	gui->cut_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Cut");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu2), GTK_WIDGET (gui->cut_item));
	gtk_widget_show (GTK_WIDGET (gui->cut_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->cut_item), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->cut_item), "_Cut");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->cut_item),TRUE );
	g_object_set_data (G_OBJECT (gui->cut_item), "owner", owner);

	gui->paste_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Paste");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu2), GTK_WIDGET (gui->paste_item));
	gtk_widget_show (GTK_WIDGET (gui->paste_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->paste_item), FALSE);
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->paste_item), "_Paste");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->paste_item),TRUE );
	g_object_set_data (G_OBJECT (gui->paste_item), "owner", owner);

	gui->help_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_Help");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu3), GTK_WIDGET (gui->help_item));
	gtk_widget_show (GTK_WIDGET (gui->help_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->help_item), FALSE);
	gtk_actionable_set_detailed_action_name(GTK_ACTIONABLE(gui->help_item), "win.help::_Help");
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->help_item), "_Help");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->help_item),TRUE );
	g_object_set_data (G_OBJECT (gui->help_item), "owner", owner);

	gui->about_item = (GtkMenuItem*) gtk_menu_item_new_with_mnemonic("_About");
	gtk_menu_shell_append (GTK_MENU_SHELL (gui->submenu3), GTK_WIDGET (gui->about_item));
	gtk_widget_show (GTK_WIDGET (gui->about_item));
	gtk_widget_set_can_focus ( GTK_WIDGET (gui->about_item), FALSE);
	gtk_actionable_set_detailed_action_name(GTK_ACTIONABLE(gui->about_item), "win.about::_About");
	gtk_menu_item_set_label (GTK_MENU_ITEM(gui->about_item), "_About");
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM(gui->about_item),TRUE );
	g_object_set_data (G_OBJECT (gui->about_item), "owner", owner);

	gui->renderer1 = (GtkCellRendererText*) gtk_cell_renderer_text_new ();
	gtk_tree_view_column_pack_start(GTK_TREE_VIEW_COLUMN(gui->column1), GTK_CELL_RENDERER(gui->renderer1), TRUE);
	gtk_tree_view_column_add_attribute(GTK_TREE_VIEW_COLUMN(gui->column1), GTK_CELL_RENDERER(gui->renderer1), "text", 0);
	g_object_set_data (G_OBJECT (gui->renderer1), "owner", owner);

	gui->renderer2 = (GtkCellRendererText*) gtk_cell_renderer_text_new ();
	gtk_tree_view_column_pack_start(GTK_TREE_VIEW_COLUMN(gui->column2), GTK_CELL_RENDERER(gui->renderer2), TRUE);
	gtk_tree_view_column_add_attribute(GTK_TREE_VIEW_COLUMN(gui->column2), GTK_CELL_RENDERER(gui->renderer2), "text", 1);
	g_object_set_data (G_OBJECT (gui->renderer2), "owner", owner);

	gui->renderer3 = (GtkCellRendererText*) gtk_cell_renderer_text_new ();
	gtk_tree_view_column_pack_start(GTK_TREE_VIEW_COLUMN(gui->column3), GTK_CELL_RENDERER(gui->renderer3), TRUE);
	gtk_tree_view_column_add_attribute(GTK_TREE_VIEW_COLUMN(gui->column3), GTK_CELL_RENDERER(gui->renderer3), "text", 2);
	g_object_set_data (G_OBJECT (gui->renderer3), "owner", owner);

	gtk_widget_show (GTK_WIDGET (gui->window1));


	/* Accelerators */

	gtk_window_add_accel_group (GTK_WINDOW(gui->window1), gui->accel_group);
	gtk_window_add_accel_group (gui->window1, gui->accelgroup1);


	/* Signal connections */
	g_signal_connect_swapped (G_OBJECT (gui->window1), "destroy",
		G_CALLBACK (gtk_main_quit), NULL);

	g_signal_connect (G_OBJECT (gui->open_item), "activate",
	                    G_CALLBACK (on_open_item_activate),
	                    NULL);

	g_signal_connect (G_OBJECT (gui->save_item), "activate",
	                    G_CALLBACK (on_save_item_activate),
	                    NULL);

	g_signal_connect (G_OBJECT (gui->save_as_item), "activate",
	                    G_CALLBACK (on_save_as_item_activate),
	                    NULL);

	g_signal_connect (G_OBJECT (gui->help_item), "activate",
	                    G_CALLBACK (help_item_activate),
	                    NULL);

	g_signal_connect (G_OBJECT (gui->about_item), "activate",
	                    G_CALLBACK (about_item_activate),
	                    NULL);

	g_signal_connect (G_OBJECT (gui->toolbutton2), "clicked",
	                    G_CALLBACK (toolbutton2_click),
	                    NULL);

	gtk_widget_add_accelerator (GTK_WIDGET (gui->open_item), "activate", gui->accel_group,
		GDK_KEY_o, GDK_CONTROL_MASK,
		GTK_ACCEL_VISIBLE);

	gtk_widget_add_accelerator (GTK_WIDGET (gui->save_item), "activate", gui->accel_group,
		GDK_KEY_s, GDK_CONTROL_MASK,
		GTK_ACCEL_VISIBLE);

	gtk_widget_add_accelerator (GTK_WIDGET (gui->save_as_item), "activate", gui->accel_group,
		GDK_KEY_s, 0,
		GTK_ACCEL_VISIBLE);

	gtk_widget_add_accelerator (GTK_WIDGET (gui->help_item), "activate", gui->accel_group,
		GDK_KEY_F1, 0,
		GTK_ACCEL_VISIBLE);

	gtk_widget_add_accelerator (GTK_WIDGET (gui->about_item), "activate", gui->accel_group,
		GDK_KEY_F7, 0,
		GTK_ACCEL_VISIBLE);

	gtk_widget_add_accelerator (GTK_WIDGET (gui->toolbutton2), "clicked", gui->accel_group,
		GDK_KEY_p, GDK_CONTROL_MASK,
		GTK_ACCEL_VISIBLE);

	gtk_accel_group_connect (gui->accelgroup1, GDK_KEY_c, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE,
			g_cclosure_new(G_CALLBACK(copy_item_activate), NULL, NULL));

	gtk_widget_add_accelerator (GTK_WIDGET(gui->copy_item), "activate", gui->accelgroup1,
			GDK_KEY_c, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE);

	gtk_accel_group_connect (gui->accelgroup1, GDK_KEY_x, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE,
			g_cclosure_new(G_CALLBACK(cut_item_activate), NULL, NULL));

	gtk_widget_add_accelerator (GTK_WIDGET(gui->cut_item), "activate", gui->accelgroup1,
			GDK_KEY_x, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE);

	gtk_accel_group_connect (gui->accelgroup1, GDK_KEY_n, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE,
			g_cclosure_new(G_CALLBACK(new_item_activate), NULL, NULL));

	gtk_widget_add_accelerator (GTK_WIDGET(gui->new_item), "activate", gui->accelgroup1,
			GDK_KEY_n, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE);

	gtk_accel_group_connect (gui->accelgroup1, GDK_KEY_o, 0,
			GTK_ACCEL_VISIBLE,
			g_cclosure_new(G_CALLBACK(open_item_activate), NULL, NULL));

	gtk_widget_add_accelerator (GTK_WIDGET(gui->open_item), "activate", gui->accelgroup1,
			GDK_KEY_o, 0,
			GTK_ACCEL_VISIBLE);

	gtk_accel_group_connect (gui->accelgroup1, GDK_KEY_v, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE,
			g_cclosure_new(G_CALLBACK(paste_item_activate), NULL, NULL));

	gtk_widget_add_accelerator (GTK_WIDGET(gui->paste_item), "activate", gui->accelgroup1,
			GDK_KEY_v, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE);

	gtk_accel_group_connect (gui->accelgroup1, GDK_KEY_s, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE,
			g_cclosure_new(G_CALLBACK(save_item_activate), NULL, NULL));

	gtk_widget_add_accelerator (GTK_WIDGET(gui->save_item), "activate", gui->accelgroup1,
			GDK_KEY_s, GDK_CONTROL_MASK,
			GTK_ACCEL_VISIBLE);

	gtk_accel_group_connect (gui->accelgroup1, GDK_KEY_t, GDK_SHIFT_MASK | GDK_MOD1_MASK,
			GTK_ACCEL_VISIBLE,
			g_cclosure_new(G_CALLBACK(toolbutton1_click), NULL, NULL));

	gtk_widget_add_accelerator (GTK_WIDGET(gui->toolbutton1), "clicked", gui->accelgroup1,
			GDK_KEY_t, GDK_SHIFT_MASK | GDK_MOD1_MASK,
			GTK_ACCEL_VISIBLE);


	/* Population of Stores */

	populate_liststore1(gui, GTK_TREE_MODEL(gui->liststore1));

	initialise_window1 (gui);

	return gui;
}

void window1_gui_destroy (Window1Gui *gui)
{
	gtk_widget_destroy (GTK_WIDGET (gui->window1));
	g_free (gui);
	return;
}

