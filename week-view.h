/*
 * week-view.h
 * This file is part of focal, a calendar application for Linux
 * Copyright 2018 Oliver Giles and focal contributors.
 *
 * Focal is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * Focal is distributed without any explicit or implied warranty.
 * You should have received a copy of the GNU General Public License
 * version 3 with focal. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef WEEK_VIEW_H
#define WEEK_VIEW_H

#include <gtk/gtk.h>

#include "calendar.h"

#define FOCAL_TYPE_WEEK_VIEW (week_view_get_type())
G_DECLARE_FINAL_TYPE(WeekView, week_view, FOCAL, WEEK_VIEW, GtkDrawingArea)

GtkWidget* week_view_new(void);

void week_view_add_event(WeekView* wv, Calendar* cal, CalendarEvent vevent);
void week_view_remove_event(WeekView* wv, CalendarEvent vevent);
void week_view_add_calendar(WeekView* widget, Calendar* cal);
int week_view_get_current_week(WeekView* wv);

#endif // WEEK_VIEW_H
