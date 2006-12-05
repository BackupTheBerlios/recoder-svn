#include <gtk/gtk.h>

void hello (GtkWidget *w, gpointer data)
{
  g_print ("Hello World\n");
}

gint delete_event (GtkWidget *w, GdkEvent *e, gpointer data)
{

}

