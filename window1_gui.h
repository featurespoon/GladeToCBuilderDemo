#ifndef window1_gui_h
#define window1_gui_h

#include <gtk/gtk.h>

typedef struct tag_Window1Gui
{
	GtkAccelGroup        *accel_group;
	GtkAccelGroup        *accelgroup1;
	GtkWindow            *window1;
	GtkBox               *vbox1;
	GtkMenuBar           *menubar1;
	GtkMenuItem          *menuitem1;
	GtkMenu              *submenu1;
	GtkAccelGroup        *submenu1_accel_group;
	GtkMenuItem          *new_item;
	GtkMenuItem          *open_item;
	GtkMenuItem          *save_item;
	GtkMenuItem          *save_as_item;
	GtkSeparatorMenuItem *separator1;
	GtkMenuItem          *quit_item;
	GtkMenuItem          *menuitem2;
	GtkMenu              *submenu2;
	GtkAccelGroup        *submenu2_accel_group;
	GtkMenuItem          *copy_item;
	GtkMenuItem          *cut_item;
	GtkMenuItem          *paste_item;
	GtkMenuItem          *menuitem3;
	GtkMenu              *submenu3;
	GtkAccelGroup        *submenu3_accel_group;
	GtkMenuItem          *help_item;
	GtkMenuItem          *about_item;
	AtkObject            *menubar1_atkobject;
	GtkToolbar           *toolbar1;
	GtkToolButton        *toolbutton1;
	GtkToolButton        *toolbutton2;
	GtkToolButton        *toolbutton3;
	GtkSeparatorToolItem *separator2;
	GtkToolButton        *toolbutton4;
	GtkToolButton        *toolbutton5;
	GtkToolButton        *toolbutton6;
	AtkObject            *toolbar1_atkobject;
	GtkScrolledWindow    *scrolledwindow1;
	GtkTreeView          *treeview1;
	GtkTreeSelection     *treeselection1;
	GtkTreeViewColumn    *column1;
	GtkCellRendererText  *renderer1;
	GtkTreeViewColumn    *column2;
	GtkCellRendererText  *renderer2;
	GtkTreeViewColumn    *column3;
	GtkCellRendererText  *renderer3;
	AtkObject            *treeview1_atkobject;
	GtkStatusbar         *statusbar1;
	GtkListStore         *liststore1;
} Window1Gui;

Window1Gui *window1_gui_create (gpointer owner);

void window1_gui_destroy (Window1Gui *window1);

void
on_open_item_activate (GtkMenuItem* open_item,
	gpointer                  user_data);

void
on_save_item_activate (GtkMenuItem* save_item,
	gpointer                  user_data);

void
on_save_as_item_activate (GtkMenuItem* save_as_item,
	gpointer                  user_data);

void
help_item_activate (GtkMenuItem* help_item,
	gpointer                  user_data);

void
about_item_activate (GtkMenuItem* about_item,
	gpointer                  user_data);

void
toolbutton2_click (GtkToolButton* toolbutton2,
	gpointer                  user_data);

gboolean
copy_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier);
gboolean
cut_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier);
gboolean
new_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier);
gboolean
open_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier);
gboolean
paste_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier);
gboolean
save_item_activate (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier);
gboolean
toolbutton1_click (GtkAccelGroup * accel_group,
	GObject                   *acceleratable,
	guint                     keyval,
	GdkModifierType           modifier);
void populate_liststore1(Window1Gui *gui, GtkTreeModel* liststore);

void initialise_window1 (Window1Gui *window1);

#endif
