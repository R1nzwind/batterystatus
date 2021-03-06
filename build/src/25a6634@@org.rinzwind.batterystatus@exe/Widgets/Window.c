/* Window.c generated by valac 0.47.4, the Vala compiler
 * generated from Window.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <stdio.h>
#include <cairo.h>
#include <float.h>
#include <math.h>
#include <glib/gi18n-lib.h>

#define BATTERYSTATUS_TYPE_WINDOW (batterystatus_window_get_type ())
#define BATTERYSTATUS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BATTERYSTATUS_TYPE_WINDOW, BatterystatusWindow))
#define BATTERYSTATUS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BATTERYSTATUS_TYPE_WINDOW, BatterystatusWindowClass))
#define BATTERYSTATUS_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BATTERYSTATUS_TYPE_WINDOW))
#define BATTERYSTATUS_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BATTERYSTATUS_TYPE_WINDOW))
#define BATTERYSTATUS_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BATTERYSTATUS_TYPE_WINDOW, BatterystatusWindowClass))

typedef struct _BatterystatusWindow BatterystatusWindow;
typedef struct _BatterystatusWindowClass BatterystatusWindowClass;
typedef struct _BatterystatusWindowPrivate BatterystatusWindowPrivate;

#define BATTERYSTATUS_TYPE_HEADER_BAR (batterystatus_header_bar_get_type ())
#define BATTERYSTATUS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BATTERYSTATUS_TYPE_HEADER_BAR, BatterystatusHeaderBar))
#define BATTERYSTATUS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BATTERYSTATUS_TYPE_HEADER_BAR, BatterystatusHeaderBarClass))
#define BATTERYSTATUS_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BATTERYSTATUS_TYPE_HEADER_BAR))
#define BATTERYSTATUS_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BATTERYSTATUS_TYPE_HEADER_BAR))
#define BATTERYSTATUS_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BATTERYSTATUS_TYPE_HEADER_BAR, BatterystatusHeaderBarClass))

typedef struct _BatterystatusHeaderBar BatterystatusHeaderBar;
typedef struct _BatterystatusHeaderBarClass BatterystatusHeaderBarClass;
enum  {
	BATTERYSTATUS_WINDOW_0_PROPERTY,
	BATTERYSTATUS_WINDOW_NUM_PROPERTIES
};
static GParamSpec* batterystatus_window_properties[BATTERYSTATUS_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
typedef struct _Block1Data Block1Data;

struct _BatterystatusWindow {
	GtkApplicationWindow parent_instance;
	BatterystatusWindowPrivate * priv;
};

struct _BatterystatusWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _BatterystatusWindowPrivate {
	GSettings* settings;
	GdkScreen* screen;
	GdkDisplay* display;
	GtkCssProvider* css_provider;
	gchar* stylesheet;
	BatterystatusHeaderBar* headerbar;
	GtkLabel* label;
};

struct _Block1Data {
	int _ref_count_;
	BatterystatusWindow* self;
	gchar* message;
};

static gint BatterystatusWindow_private_offset;
static gpointer batterystatus_window_parent_class = NULL;

GType batterystatus_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (BatterystatusWindow, g_object_unref)
GType batterystatus_header_bar_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (BatterystatusHeaderBar, g_object_unref)
BatterystatusHeaderBar* batterystatus_header_bar_new (void);
BatterystatusHeaderBar* batterystatus_header_bar_construct (GType object_type);
GType application_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Application, g_object_unref)
BatterystatusWindow* batterystatus_window_new (Application* app);
BatterystatusWindow* batterystatus_window_construct (GType object_type,
                                                     Application* app);
gboolean batterystatus_window_before_destroy (BatterystatusWindow* self);
void batterystatus_window_set_stylesheet (BatterystatusWindow* self);
gint batterystatus_window_get_scale (BatterystatusWindow* self);
void batterystatus_window_update_windowproperties (BatterystatusWindow* self);
gboolean batterystatus_window_on_draw (BatterystatusWindow* self,
                                       GtkWidget* da,
                                       cairo_t* ctx);
static gboolean _batterystatus_window_on_draw_gtk_widget_draw (GtkWidget* _sender,
                                                        cairo_t* cr,
                                                        gpointer self);
void batterystatus_window_update_label (BatterystatusWindow* self);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
gchar* upower_DeviceStatistics (void);
static gboolean __lambda4_ (Block1Data* _data1_);
static gboolean ___lambda4__gsource_func (gpointer self);
static GObject * batterystatus_window_constructor (GType type,
                                            guint n_construct_properties,
                                            GObjectConstructParam * construct_properties);
static gboolean _batterystatus_window___lambda5_ (BatterystatusWindow* self,
                                           GdkEventAny* e);
static gboolean __batterystatus_window___lambda5__gtk_widget_delete_event (GtkWidget* _sender,
                                                                    GdkEventAny* event,
                                                                    gpointer self);
static void _batterystatus_window___lambda6_ (BatterystatusWindow* self,
                                       GdkScreen* key);
static void __batterystatus_window___lambda6__gdk_screen_monitors_changed (GdkScreen* _sender,
                                                                    gpointer self);
static void _batterystatus_window___lambda7_ (BatterystatusWindow* self,
                                       const gchar* key);
static void __batterystatus_window___lambda7__g_settings_changed (GSettings* _sender,
                                                           const gchar* key,
                                                           gpointer self);
static gboolean _batterystatus_window___lambda8_ (BatterystatusWindow* self);
static gboolean __batterystatus_window___lambda8__gsource_func (gpointer self);
static void batterystatus_window_finalize (GObject * obj);
static GType batterystatus_window_get_type_once (void);

static inline gpointer
batterystatus_window_get_instance_private (BatterystatusWindow* self)
{
	return G_STRUCT_MEMBER_P (self, BatterystatusWindow_private_offset);
}

BatterystatusWindow*
batterystatus_window_construct (GType object_type,
                                Application* app)
{
	BatterystatusWindow * self = NULL;
#line 11 "../src/Widgets/Window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 12 "../src/Widgets/Window.vala"
	self = (BatterystatusWindow*) g_object_new (object_type, "application", app, NULL);
#line 11 "../src/Widgets/Window.vala"
	return self;
#line 153 "Window.c"
}

BatterystatusWindow*
batterystatus_window_new (Application* app)
{
#line 11 "../src/Widgets/Window.vala"
	return batterystatus_window_construct (BATTERYSTATUS_TYPE_WINDOW, app);
#line 161 "Window.c"
}

gboolean
batterystatus_window_before_destroy (BatterystatusWindow* self)
{
	gint xpos = 0;
	gint ypos = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	GSettings* _tmp2_;
	GSettings* _tmp3_;
	gboolean result = FALSE;
#line 17 "../src/Widgets/Window.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 19 "../src/Widgets/Window.vala"
	gtk_window_get_position ((GtkWindow*) self, &_tmp0_, &_tmp1_);
#line 19 "../src/Widgets/Window.vala"
	xpos = _tmp0_;
#line 19 "../src/Widgets/Window.vala"
	ypos = _tmp1_;
#line 20 "../src/Widgets/Window.vala"
	_tmp2_ = self->priv->settings;
#line 20 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp2_, "xpos", xpos);
#line 21 "../src/Widgets/Window.vala"
	_tmp3_ = self->priv->settings;
#line 21 "../src/Widgets/Window.vala"
	g_settings_set_int (_tmp3_, "ypos", ypos);
#line 22 "../src/Widgets/Window.vala"
	result = FALSE;
#line 22 "../src/Widgets/Window.vala"
	return result;
#line 194 "Window.c"
}

void
batterystatus_window_set_stylesheet (BatterystatusWindow* self)
{
	GError* _inner_error0_ = NULL;
#line 25 "../src/Widgets/Window.vala"
	g_return_if_fail (self != NULL);
#line 203 "Window.c"
	{
		GtkCssProvider* _tmp0_;
		const gchar* _tmp1_;
		GdkScreen* _tmp2_;
		GtkCssProvider* _tmp3_;
		GtkLabel* _tmp4_;
		GtkStyleContext* _tmp5_;
#line 27 "../src/Widgets/Window.vala"
		_tmp0_ = self->priv->css_provider;
#line 27 "../src/Widgets/Window.vala"
		_tmp1_ = self->priv->stylesheet;
#line 27 "../src/Widgets/Window.vala"
		gtk_css_provider_load_from_data (_tmp0_, _tmp1_, (gssize) -1, &_inner_error0_);
#line 27 "../src/Widgets/Window.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 219 "Window.c"
			goto __catch0_g_error;
		}
#line 28 "../src/Widgets/Window.vala"
		_tmp2_ = self->priv->screen;
#line 28 "../src/Widgets/Window.vala"
		_tmp3_ = self->priv->css_provider;
#line 28 "../src/Widgets/Window.vala"
		gtk_style_context_add_provider_for_screen (_tmp2_, (GtkStyleProvider*) _tmp3_, (guint) GTK_STYLE_PROVIDER_PRIORITY_USER);
#line 31 "../src/Widgets/Window.vala"
		_tmp4_ = self->priv->label;
#line 31 "../src/Widgets/Window.vala"
		_tmp5_ = gtk_widget_get_style_context ((GtkWidget*) _tmp4_);
#line 31 "../src/Widgets/Window.vala"
		gtk_style_context_add_class (_tmp5_, "stylesheet");
#line 234 "Window.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		FILE* _tmp6_;
#line 26 "../src/Widgets/Window.vala"
		e = _inner_error0_;
#line 26 "../src/Widgets/Window.vala"
		_inner_error0_ = NULL;
#line 34 "../src/Widgets/Window.vala"
		_tmp6_ = stderr;
#line 34 "../src/Widgets/Window.vala"
		fprintf (_tmp6_, "Problem loading stylesheet\n");
#line 26 "../src/Widgets/Window.vala"
		_g_error_free0 (e);
#line 251 "Window.c"
	}
	__finally0:
#line 26 "../src/Widgets/Window.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 26 "../src/Widgets/Window.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 26 "../src/Widgets/Window.vala"
		g_clear_error (&_inner_error0_);
#line 26 "../src/Widgets/Window.vala"
		return;
#line 262 "Window.c"
	}
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 39 "../src/Widgets/Window.vala"
	return self ? g_object_ref (self) : NULL;
#line 271 "Window.c"
}

gint
batterystatus_window_get_scale (BatterystatusWindow* self)
{
	GdkMonitor* defmon = NULL;
	GdkDisplay* _tmp0_;
	GdkMonitor* _tmp1_;
	GdkMonitor* _tmp2_;
	gint scale = 0;
	gint result = 0;
#line 38 "../src/Widgets/Window.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 39 "../src/Widgets/Window.vala"
	_tmp0_ = self->priv->display;
#line 39 "../src/Widgets/Window.vala"
	_tmp1_ = gdk_display_get_primary_monitor (_tmp0_);
#line 39 "../src/Widgets/Window.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 39 "../src/Widgets/Window.vala"
	defmon = _tmp2_;
#line 40 "../src/Widgets/Window.vala"
	scale = gdk_monitor_get_scale_factor (defmon);
#line 41 "../src/Widgets/Window.vala"
	result = scale;
#line 41 "../src/Widgets/Window.vala"
	_g_object_unref0 (defmon);
#line 41 "../src/Widgets/Window.vala"
	return result;
#line 301 "Window.c"
}

static gchar*
string_replace (const gchar* self,
                const gchar* old,
                const gchar* replacement)
{
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GError* _inner_error0_ = NULL;
	gchar* result = NULL;
#line 1534 "glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1534 "glib-2.0.vapi"
	g_return_val_if_fail (old != NULL, NULL);
#line 1534 "glib-2.0.vapi"
	g_return_val_if_fail (replacement != NULL, NULL);
#line 1535 "glib-2.0.vapi"
	if ((*((gchar*) self)) == '\0') {
#line 1535 "glib-2.0.vapi"
		_tmp1_ = TRUE;
#line 323 "Window.c"
	} else {
#line 1535 "glib-2.0.vapi"
		_tmp1_ = (*((gchar*) old)) == '\0';
#line 327 "Window.c"
	}
#line 1535 "glib-2.0.vapi"
	if (_tmp1_) {
#line 1535 "glib-2.0.vapi"
		_tmp0_ = TRUE;
#line 333 "Window.c"
	} else {
#line 1535 "glib-2.0.vapi"
		_tmp0_ = g_strcmp0 (old, replacement) == 0;
#line 337 "Window.c"
	}
#line 1535 "glib-2.0.vapi"
	if (_tmp0_) {
#line 341 "Window.c"
		gchar* _tmp2_;
#line 1536 "glib-2.0.vapi"
		_tmp2_ = g_strdup (self);
#line 1536 "glib-2.0.vapi"
		result = _tmp2_;
#line 1536 "glib-2.0.vapi"
		return result;
#line 349 "Window.c"
	}
	{
		GRegex* regex = NULL;
		gchar* _tmp3_;
		gchar* _tmp4_;
		GRegex* _tmp5_;
		GRegex* _tmp6_;
		gchar* _tmp7_ = NULL;
		GRegex* _tmp8_;
		gchar* _tmp9_;
		gchar* _tmp10_;
#line 1539 "glib-2.0.vapi"
		_tmp3_ = g_regex_escape_string (old, -1);
#line 1539 "glib-2.0.vapi"
		_tmp4_ = _tmp3_;
#line 1539 "glib-2.0.vapi"
		_tmp5_ = g_regex_new (_tmp4_, 0, 0, &_inner_error0_);
#line 1539 "glib-2.0.vapi"
		_tmp6_ = _tmp5_;
#line 1539 "glib-2.0.vapi"
		_g_free0 (_tmp4_);
#line 1539 "glib-2.0.vapi"
		regex = _tmp6_;
#line 1539 "glib-2.0.vapi"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 1539 "glib-2.0.vapi"
			if (_inner_error0_->domain == G_REGEX_ERROR) {
#line 377 "Window.c"
				goto __catch0_g_regex_error;
			}
#line 1539 "glib-2.0.vapi"
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 1539 "glib-2.0.vapi"
			g_clear_error (&_inner_error0_);
#line 1539 "glib-2.0.vapi"
			return NULL;
#line 386 "Window.c"
		}
#line 1540 "glib-2.0.vapi"
		_tmp8_ = regex;
#line 1540 "glib-2.0.vapi"
		_tmp9_ = g_regex_replace_literal (_tmp8_, self, (gssize) -1, 0, replacement, 0, &_inner_error0_);
#line 1540 "glib-2.0.vapi"
		_tmp7_ = _tmp9_;
#line 1540 "glib-2.0.vapi"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 1540 "glib-2.0.vapi"
			_g_regex_unref0 (regex);
#line 1540 "glib-2.0.vapi"
			if (_inner_error0_->domain == G_REGEX_ERROR) {
#line 400 "Window.c"
				goto __catch0_g_regex_error;
			}
#line 1540 "glib-2.0.vapi"
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 1540 "glib-2.0.vapi"
			g_clear_error (&_inner_error0_);
#line 1540 "glib-2.0.vapi"
			return NULL;
#line 409 "Window.c"
		}
#line 1540 "glib-2.0.vapi"
		_tmp10_ = _tmp7_;
#line 1540 "glib-2.0.vapi"
		_tmp7_ = NULL;
#line 1540 "glib-2.0.vapi"
		result = _tmp10_;
#line 1540 "glib-2.0.vapi"
		_g_free0 (_tmp7_);
#line 1540 "glib-2.0.vapi"
		_g_regex_unref0 (regex);
#line 1540 "glib-2.0.vapi"
		return result;
#line 423 "Window.c"
	}
	goto __finally0;
	__catch0_g_regex_error:
	{
		GError* e = NULL;
#line 1538 "glib-2.0.vapi"
		e = _inner_error0_;
#line 1538 "glib-2.0.vapi"
		_inner_error0_ = NULL;
#line 1542 "glib-2.0.vapi"
		g_assert_not_reached ();
#line 1538 "glib-2.0.vapi"
		_g_error_free0 (e);
#line 437 "Window.c"
	}
	__finally0:
#line 1538 "glib-2.0.vapi"
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 1538 "glib-2.0.vapi"
	g_clear_error (&_inner_error0_);
#line 1538 "glib-2.0.vapi"
	return NULL;
#line 446 "Window.c"
}

static const gchar*
string_to_string (const gchar* self)
{
	const gchar* result = NULL;
#line 1570 "glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1571 "glib-2.0.vapi"
	result = self;
#line 1571 "glib-2.0.vapi"
	return result;
#line 459 "Window.c"
}

static gboolean
_batterystatus_window_on_draw_gtk_widget_draw (GtkWidget* _sender,
                                               cairo_t* cr,
                                               gpointer self)
{
	gboolean result;
	result = batterystatus_window_on_draw ((BatterystatusWindow*) self, _sender, cr);
#line 83 "../src/Widgets/Window.vala"
	return result;
#line 471 "Window.c"
}

void
batterystatus_window_update_windowproperties (BatterystatusWindow* self)
{
	gint xpos = 0;
	GSettings* _tmp0_;
	gint ypos = 0;
	GSettings* _tmp1_;
	gint fontsize = 0;
	GSettings* _tmp2_;
	gboolean immovable = FALSE;
	GSettings* _tmp3_;
	gboolean decoration = FALSE;
	GSettings* _tmp4_;
	gint scale = 0;
	gchar* foregroundcolor = NULL;
	GSettings* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	const gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	const gchar* _tmp14_;
	const gchar* _tmp15_;
	const gchar* _tmp16_;
	gchar* _tmp17_;
	GdkVisual* visual = NULL;
	GdkScreen* _tmp18_;
	GdkVisual* _tmp19_;
	GdkVisual* _tmp20_;
	GdkVisual* _tmp21_;
#line 44 "../src/Widgets/Window.vala"
	g_return_if_fail (self != NULL);
#line 45 "../src/Widgets/Window.vala"
	_tmp0_ = self->priv->settings;
#line 45 "../src/Widgets/Window.vala"
	xpos = g_settings_get_int (_tmp0_, "xpos");
#line 46 "../src/Widgets/Window.vala"
	_tmp1_ = self->priv->settings;
#line 46 "../src/Widgets/Window.vala"
	ypos = g_settings_get_int (_tmp1_, "ypos");
#line 47 "../src/Widgets/Window.vala"
	_tmp2_ = self->priv->settings;
#line 47 "../src/Widgets/Window.vala"
	fontsize = g_settings_get_int (_tmp2_, "font-size");
#line 48 "../src/Widgets/Window.vala"
	_tmp3_ = self->priv->settings;
#line 48 "../src/Widgets/Window.vala"
	immovable = g_settings_get_boolean (_tmp3_, "immovable");
#line 49 "../src/Widgets/Window.vala"
	_tmp4_ = self->priv->settings;
#line 49 "../src/Widgets/Window.vala"
	decoration = g_settings_get_boolean (_tmp4_, "decoration");
#line 50 "../src/Widgets/Window.vala"
	scale = batterystatus_window_get_scale (self);
#line 52 "../src/Widgets/Window.vala"
	xpos = xpos * scale;
#line 53 "../src/Widgets/Window.vala"
	ypos = ypos * scale;
#line 54 "../src/Widgets/Window.vala"
	fontsize = fontsize * scale;
#line 55 "../src/Widgets/Window.vala"
	_tmp5_ = self->priv->settings;
#line 55 "../src/Widgets/Window.vala"
	_tmp6_ = g_settings_get_string (_tmp5_, "foreground-color");
#line 55 "../src/Widgets/Window.vala"
	foregroundcolor = _tmp6_;
#line 57 "../src/Widgets/Window.vala"
	_tmp7_ = g_strdup ("\t\n" \
"\t\t.stylesheet {\n" \
"\t\tfont-size: {font-size}px;\n" \
"\t\tcolor: {foreground-color};\n" \
"\t\t}");
#line 57 "../src/Widgets/Window.vala"
	_g_free0 (self->priv->stylesheet);
#line 57 "../src/Widgets/Window.vala"
	self->priv->stylesheet = _tmp7_;
#line 62 "../src/Widgets/Window.vala"
	if (!decoration) {
#line 549 "Window.c"
		const gchar* _tmp8_;
		gchar* _tmp9_;
#line 63 "../src/Widgets/Window.vala"
		_tmp8_ = self->priv->stylesheet;
#line 63 "../src/Widgets/Window.vala"
		_tmp9_ = g_strconcat (_tmp8_, "\n" \
"\t\t\theaderbar {\n" \
"\t\t\t\tmin-height: 0px;\n" \
"\t\t\t\tpadding-left: 5px; \n" \
"\t\t\t\tpadding-right: 4px;\n" \
"\t\t\t\tbox-shadow: none;\n" \
"\t\t\t\tbackground: rgba(0,0,0,0.5);\n" \
"\t\t\t}", NULL);
#line 63 "../src/Widgets/Window.vala"
		_g_free0 (self->priv->stylesheet);
#line 63 "../src/Widgets/Window.vala"
		self->priv->stylesheet = _tmp9_;
#line 560 "Window.c"
	}
#line 72 "../src/Widgets/Window.vala"
	_tmp10_ = self->priv->stylesheet;
#line 72 "../src/Widgets/Window.vala"
	_tmp11_ = g_strdup_printf ("%i", fontsize);
#line 72 "../src/Widgets/Window.vala"
	_tmp12_ = _tmp11_;
#line 72 "../src/Widgets/Window.vala"
	_tmp13_ = string_replace (_tmp10_, "{font-size}", _tmp12_);
#line 72 "../src/Widgets/Window.vala"
	_g_free0 (self->priv->stylesheet);
#line 72 "../src/Widgets/Window.vala"
	self->priv->stylesheet = _tmp13_;
#line 72 "../src/Widgets/Window.vala"
	_g_free0 (_tmp12_);
#line 73 "../src/Widgets/Window.vala"
	_tmp14_ = self->priv->stylesheet;
#line 73 "../src/Widgets/Window.vala"
	_tmp15_ = foregroundcolor;
#line 73 "../src/Widgets/Window.vala"
	_tmp16_ = string_to_string (_tmp15_);
#line 73 "../src/Widgets/Window.vala"
	_tmp17_ = string_replace (_tmp14_, "{foreground-color}", _tmp16_);
#line 73 "../src/Widgets/Window.vala"
	_g_free0 (self->priv->stylesheet);
#line 73 "../src/Widgets/Window.vala"
	self->priv->stylesheet = _tmp17_;
#line 75 "../src/Widgets/Window.vala"
	gtk_window_move ((GtkWindow*) self, xpos, ypos);
#line 77 "../src/Widgets/Window.vala"
	batterystatus_window_set_stylesheet (self);
#line 78 "../src/Widgets/Window.vala"
	gtk_widget_set_app_paintable ((GtkWidget*) self, TRUE);
#line 79 "../src/Widgets/Window.vala"
	gtk_window_set_resizable ((GtkWindow*) self, FALSE);
#line 80 "../src/Widgets/Window.vala"
	_tmp18_ = self->priv->screen;
#line 80 "../src/Widgets/Window.vala"
	_tmp19_ = gdk_screen_get_rgba_visual (_tmp18_);
#line 80 "../src/Widgets/Window.vala"
	_tmp20_ = _g_object_ref0 (_tmp19_);
#line 80 "../src/Widgets/Window.vala"
	visual = _tmp20_;
#line 81 "../src/Widgets/Window.vala"
	_tmp21_ = visual;
#line 81 "../src/Widgets/Window.vala"
	gtk_widget_set_visual ((GtkWidget*) self, _tmp21_);
#line 82 "../src/Widgets/Window.vala"
	if (decoration) {
#line 83 "../src/Widgets/Window.vala"
		g_signal_connect_object ((GtkWidget*) self, "draw", (GCallback) _batterystatus_window_on_draw_gtk_widget_draw, self, 0);
#line 612 "Window.c"
	}
#line 85 "../src/Widgets/Window.vala"
	if (immovable) {
#line 86 "../src/Widgets/Window.vala"
		gtk_window_set_type_hint ((GtkWindow*) self, GDK_WINDOW_TYPE_HINT_DESKTOP);
#line 618 "Window.c"
	}
#line 44 "../src/Widgets/Window.vala"
	_g_object_unref0 (visual);
#line 44 "../src/Widgets/Window.vala"
	_g_free0 (foregroundcolor);
#line 624 "Window.c"
}

gboolean
batterystatus_window_on_draw (BatterystatusWindow* self,
                              GtkWidget* da,
                              cairo_t* ctx)
{
	gboolean result = FALSE;
#line 90 "../src/Widgets/Window.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 90 "../src/Widgets/Window.vala"
	g_return_val_if_fail (da != NULL, FALSE);
#line 90 "../src/Widgets/Window.vala"
	g_return_val_if_fail (ctx != NULL, FALSE);
#line 91 "../src/Widgets/Window.vala"
	cairo_set_source_rgba (ctx, (gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) 0);
#line 92 "../src/Widgets/Window.vala"
	cairo_set_operator (ctx, CAIRO_OPERATOR_SOURCE);
#line 93 "../src/Widgets/Window.vala"
	cairo_paint (ctx);
#line 94 "../src/Widgets/Window.vala"
	cairo_set_operator (ctx, CAIRO_OPERATOR_OVER);
#line 95 "../src/Widgets/Window.vala"
	result = FALSE;
#line 95 "../src/Widgets/Window.vala"
	return result;
#line 651 "Window.c"
}

static Block1Data*
block1_data_ref (Block1Data* _data1_)
{
#line 98 "../src/Widgets/Window.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 98 "../src/Widgets/Window.vala"
	return _data1_;
#line 661 "Window.c"
}

static void
block1_data_unref (void * _userdata_)
{
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 98 "../src/Widgets/Window.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 671 "Window.c"
		BatterystatusWindow* self;
#line 98 "../src/Widgets/Window.vala"
		self = _data1_->self;
#line 98 "../src/Widgets/Window.vala"
		_g_free0 (_data1_->message);
#line 98 "../src/Widgets/Window.vala"
		_g_object_unref0 (self);
#line 98 "../src/Widgets/Window.vala"
		g_slice_free (Block1Data, _data1_);
#line 681 "Window.c"
	}
}

static gboolean
__lambda4_ (Block1Data* _data1_)
{
	BatterystatusWindow* self;
	GtkLabel* _tmp0_;
	const gchar* _tmp1_;
	gboolean result = FALSE;
#line 100 "../src/Widgets/Window.vala"
	self = _data1_->self;
#line 101 "../src/Widgets/Window.vala"
	_tmp0_ = self->priv->label;
#line 101 "../src/Widgets/Window.vala"
	_tmp1_ = string_to_string (_data1_->message);
#line 101 "../src/Widgets/Window.vala"
	gtk_label_set_text (_tmp0_, _tmp1_);
#line 102 "../src/Widgets/Window.vala"
	result = FALSE;
#line 102 "../src/Widgets/Window.vala"
	return result;
#line 704 "Window.c"
}

static gboolean
___lambda4__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda4_ (self);
#line 100 "../src/Widgets/Window.vala"
	return result;
#line 714 "Window.c"
}

void
batterystatus_window_update_label (BatterystatusWindow* self)
{
	Block1Data* _data1_;
	gchar* _tmp0_;
#line 98 "../src/Widgets/Window.vala"
	g_return_if_fail (self != NULL);
#line 98 "../src/Widgets/Window.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 98 "../src/Widgets/Window.vala"
	_data1_->_ref_count_ = 1;
#line 98 "../src/Widgets/Window.vala"
	_data1_->self = g_object_ref (self);
#line 99 "../src/Widgets/Window.vala"
	_tmp0_ = upower_DeviceStatistics ();
#line 99 "../src/Widgets/Window.vala"
	_data1_->message = _tmp0_;
#line 100 "../src/Widgets/Window.vala"
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, ___lambda4__gsource_func, block1_data_ref (_data1_), block1_data_unref);
#line 98 "../src/Widgets/Window.vala"
	block1_data_unref (_data1_);
#line 98 "../src/Widgets/Window.vala"
	_data1_ = NULL;
#line 740 "Window.c"
}

static gboolean
_batterystatus_window___lambda5_ (BatterystatusWindow* self,
                                  GdkEventAny* e)
{
	gboolean result = FALSE;
#line 110 "../src/Widgets/Window.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 111 "../src/Widgets/Window.vala"
	result = batterystatus_window_before_destroy (self);
#line 111 "../src/Widgets/Window.vala"
	return result;
#line 754 "Window.c"
}

static gboolean
__batterystatus_window___lambda5__gtk_widget_delete_event (GtkWidget* _sender,
                                                           GdkEventAny* event,
                                                           gpointer self)
{
	gboolean result;
	result = _batterystatus_window___lambda5_ ((BatterystatusWindow*) self, event);
#line 110 "../src/Widgets/Window.vala"
	return result;
#line 766 "Window.c"
}

static void
_batterystatus_window___lambda6_ (BatterystatusWindow* self,
                                  GdkScreen* key)
{
#line 116 "../src/Widgets/Window.vala"
	g_return_if_fail (key != NULL);
#line 117 "../src/Widgets/Window.vala"
	batterystatus_window_update_windowproperties (self);
#line 777 "Window.c"
}

static void
__batterystatus_window___lambda6__gdk_screen_monitors_changed (GdkScreen* _sender,
                                                               gpointer self)
{
#line 116 "../src/Widgets/Window.vala"
	_batterystatus_window___lambda6_ ((BatterystatusWindow*) self, _sender);
#line 786 "Window.c"
}

static void
_batterystatus_window___lambda7_ (BatterystatusWindow* self,
                                  const gchar* key)
{
	GSettings* _tmp0_;
	BatterystatusHeaderBar* _tmp1_;
	GSettings* _tmp2_;
#line 120 "../src/Widgets/Window.vala"
	g_return_if_fail (key != NULL);
#line 121 "../src/Widgets/Window.vala"
	gtk_window_set_title ((GtkWindow*) self, "");
#line 122 "../src/Widgets/Window.vala"
	_tmp0_ = self->priv->settings;
#line 122 "../src/Widgets/Window.vala"
	if (g_settings_get_boolean (_tmp0_, "titlebar")) {
#line 123 "../src/Widgets/Window.vala"
		gtk_window_set_title ((GtkWindow*) self, "Batterystatus");
#line 806 "Window.c"
	}
#line 125 "../src/Widgets/Window.vala"
	_tmp1_ = self->priv->headerbar;
#line 125 "../src/Widgets/Window.vala"
	_tmp2_ = self->priv->settings;
#line 125 "../src/Widgets/Window.vala"
	gtk_header_bar_set_show_close_button ((GtkHeaderBar*) _tmp1_, g_settings_get_boolean (_tmp2_, "decoration"));
#line 126 "../src/Widgets/Window.vala"
	batterystatus_window_update_windowproperties (self);
#line 816 "Window.c"
}

static void
__batterystatus_window___lambda7__g_settings_changed (GSettings* _sender,
                                                      const gchar* key,
                                                      gpointer self)
{
#line 120 "../src/Widgets/Window.vala"
	_batterystatus_window___lambda7_ ((BatterystatusWindow*) self, key);
#line 826 "Window.c"
}

static gboolean
_batterystatus_window___lambda8_ (BatterystatusWindow* self)
{
	gboolean result = FALSE;
#line 141 "../src/Widgets/Window.vala"
	batterystatus_window_update_label (self);
#line 142 "../src/Widgets/Window.vala"
	result = TRUE;
#line 142 "../src/Widgets/Window.vala"
	return result;
#line 839 "Window.c"
}

static gboolean
__batterystatus_window___lambda8__gsource_func (gpointer self)
{
	gboolean result;
	result = _batterystatus_window___lambda8_ ((BatterystatusWindow*) self);
#line 140 "../src/Widgets/Window.vala"
	return result;
#line 849 "Window.c"
}

static GObject *
batterystatus_window_constructor (GType type,
                                  guint n_construct_properties,
                                  GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	BatterystatusWindow * self;
	GdkScreen* _tmp0_;
	GdkScreen* _tmp1_;
	GdkDisplay* _tmp2_;
	GdkDisplay* _tmp3_;
	GdkScreen* _tmp4_;
	GSettings* _tmp5_;
	GtkLabel* _tmp6_;
	BatterystatusHeaderBar* _tmp7_;
	GSettings* _tmp8_;
	BatterystatusHeaderBar* _tmp9_;
	GSettings* _tmp10_;
	GSettings* _tmp11_;
#line 106 "../src/Widgets/Window.vala"
	parent_class = G_OBJECT_CLASS (batterystatus_window_parent_class);
#line 106 "../src/Widgets/Window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 106 "../src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BATTERYSTATUS_TYPE_WINDOW, BatterystatusWindow);
#line 107 "../src/Widgets/Window.vala"
	_tmp0_ = gtk_window_get_screen ((GtkWindow*) self);
#line 107 "../src/Widgets/Window.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 107 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->screen);
#line 107 "../src/Widgets/Window.vala"
	self->priv->screen = _tmp1_;
#line 108 "../src/Widgets/Window.vala"
	_tmp2_ = gdk_display_get_default ();
#line 108 "../src/Widgets/Window.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 108 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->display);
#line 108 "../src/Widgets/Window.vala"
	self->priv->display = _tmp3_;
#line 110 "../src/Widgets/Window.vala"
	g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) __batterystatus_window___lambda5__gtk_widget_delete_event, self, 0);
#line 114 "../src/Widgets/Window.vala"
	gtk_window_set_default_size ((GtkWindow*) self, 200, 80);
#line 116 "../src/Widgets/Window.vala"
	_tmp4_ = self->priv->screen;
#line 116 "../src/Widgets/Window.vala"
	g_signal_connect_object (_tmp4_, "monitors-changed", (GCallback) __batterystatus_window___lambda6__gdk_screen_monitors_changed, self, 0);
#line 120 "../src/Widgets/Window.vala"
	_tmp5_ = self->priv->settings;
#line 120 "../src/Widgets/Window.vala"
	g_signal_connect_object (_tmp5_, "changed", (GCallback) __batterystatus_window___lambda7__g_settings_changed, self, 0);
#line 130 "../src/Widgets/Window.vala"
	_tmp6_ = self->priv->label;
#line 130 "../src/Widgets/Window.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp6_);
#line 131 "../src/Widgets/Window.vala"
	batterystatus_window_update_label (self);
#line 132 "../src/Widgets/Window.vala"
	batterystatus_window_update_windowproperties (self);
#line 134 "../src/Widgets/Window.vala"
	_tmp7_ = self->priv->headerbar;
#line 134 "../src/Widgets/Window.vala"
	gtk_window_set_titlebar ((GtkWindow*) self, (GtkWidget*) _tmp7_);
#line 135 "../src/Widgets/Window.vala"
	_tmp8_ = self->priv->settings;
#line 135 "../src/Widgets/Window.vala"
	if (g_settings_get_boolean (_tmp8_, "titlebar")) {
#line 136 "../src/Widgets/Window.vala"
		gtk_window_set_title ((GtkWindow*) self, _ ("Batterystatus"));
#line 924 "Window.c"
	}
#line 138 "../src/Widgets/Window.vala"
	_tmp9_ = self->priv->headerbar;
#line 138 "../src/Widgets/Window.vala"
	_tmp10_ = self->priv->settings;
#line 138 "../src/Widgets/Window.vala"
	gtk_header_bar_set_show_close_button ((GtkHeaderBar*) _tmp9_, g_settings_get_boolean (_tmp10_, "decoration"));
#line 140 "../src/Widgets/Window.vala"
	_tmp11_ = self->priv->settings;
#line 140 "../src/Widgets/Window.vala"
	g_timeout_add_seconds_full (G_PRIORITY_DEFAULT, (guint) g_settings_get_int (_tmp11_, "timeout"), __batterystatus_window___lambda8__gsource_func, g_object_ref (self), g_object_unref);
#line 145 "../src/Widgets/Window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 106 "../src/Widgets/Window.vala"
	return obj;
#line 940 "Window.c"
}

static void
batterystatus_window_class_init (BatterystatusWindowClass * klass,
                                 gpointer klass_data)
{
#line 1 "../src/Widgets/Window.vala"
	batterystatus_window_parent_class = g_type_class_peek_parent (klass);
#line 1 "../src/Widgets/Window.vala"
	g_type_class_adjust_private_offset (klass, &BatterystatusWindow_private_offset);
#line 1 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->constructor = batterystatus_window_constructor;
#line 1 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (klass)->finalize = batterystatus_window_finalize;
#line 955 "Window.c"
}

static void
batterystatus_window_instance_init (BatterystatusWindow * self,
                                    gpointer klass)
{
	GSettings* _tmp0_;
	GtkCssProvider* _tmp1_;
	BatterystatusHeaderBar* _tmp2_;
	GtkLabel* _tmp3_;
#line 1 "../src/Widgets/Window.vala"
	self->priv = batterystatus_window_get_instance_private (self);
#line 3 "../src/Widgets/Window.vala"
	_tmp0_ = g_settings_new ("org.rinzwind.batterystatus");
#line 3 "../src/Widgets/Window.vala"
	self->priv->settings = _tmp0_;
#line 6 "../src/Widgets/Window.vala"
	_tmp1_ = gtk_css_provider_new ();
#line 6 "../src/Widgets/Window.vala"
	self->priv->css_provider = _tmp1_;
#line 8 "../src/Widgets/Window.vala"
	_tmp2_ = batterystatus_header_bar_new ();
#line 8 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp2_);
#line 8 "../src/Widgets/Window.vala"
	self->priv->headerbar = _tmp2_;
#line 9 "../src/Widgets/Window.vala"
	_tmp3_ = (GtkLabel*) gtk_label_new ("");
#line 9 "../src/Widgets/Window.vala"
	g_object_ref_sink (_tmp3_);
#line 9 "../src/Widgets/Window.vala"
	self->priv->label = _tmp3_;
#line 988 "Window.c"
}

static void
batterystatus_window_finalize (GObject * obj)
{
	BatterystatusWindow * self;
#line 1 "../src/Widgets/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BATTERYSTATUS_TYPE_WINDOW, BatterystatusWindow);
#line 3 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->settings);
#line 4 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->screen);
#line 5 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->display);
#line 6 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->css_provider);
#line 7 "../src/Widgets/Window.vala"
	_g_free0 (self->priv->stylesheet);
#line 8 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->headerbar);
#line 9 "../src/Widgets/Window.vala"
	_g_object_unref0 (self->priv->label);
#line 1 "../src/Widgets/Window.vala"
	G_OBJECT_CLASS (batterystatus_window_parent_class)->finalize (obj);
#line 1013 "Window.c"
}

static GType
batterystatus_window_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (BatterystatusWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) batterystatus_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BatterystatusWindow), 0, (GInstanceInitFunc) batterystatus_window_instance_init, NULL };
	GType batterystatus_window_type_id;
	batterystatus_window_type_id = g_type_register_static (gtk_application_window_get_type (), "BatterystatusWindow", &g_define_type_info, 0);
	BatterystatusWindow_private_offset = g_type_add_instance_private (batterystatus_window_type_id, sizeof (BatterystatusWindowPrivate));
	return batterystatus_window_type_id;
}

GType
batterystatus_window_get_type (void)
{
	static volatile gsize batterystatus_window_type_id__volatile = 0;
	if (g_once_init_enter (&batterystatus_window_type_id__volatile)) {
		GType batterystatus_window_type_id;
		batterystatus_window_type_id = batterystatus_window_get_type_once ();
		g_once_init_leave (&batterystatus_window_type_id__volatile, batterystatus_window_type_id);
	}
	return batterystatus_window_type_id__volatile;
}

