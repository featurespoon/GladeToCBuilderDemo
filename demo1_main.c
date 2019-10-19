/*                Generated from D:/Gtk3/glade/demo-builder.glade                 */

#include <gtk/gtk.h>
#include "window1.h"
#include "window1_gui.h"

int
main (int argc, char *argv[])
{
Window1 *window1 = NULL;

#ifdef ENABLE_NLS
  bindtextdomain (PACKAGE, PACKAGE_LOCALE_DIR);
  textdomain (PACKAGE);
#endif

  gtk_init (&argc, &argv);

  window1 = g_new0 (Window1, 1);
  window1->gui = window1_gui_create ((gpointer) window1);
  if (window1->gui == NULL) return 0;
  window1->aboutdialog1gui = aboutdialog1_gui_create ((gpointer) window1);
  if (window1->aboutdialog1gui == NULL) return 0;

  gtk_main ();
  return 0;
}

void window1_terminate (Window1 *window1)
{
  aboutdialog1_gui_destroy (window1->aboutdialog1gui);
  window1_gui_destroy (window1->gui);
  g_free (window1);
  gtk_main_quit();
}
