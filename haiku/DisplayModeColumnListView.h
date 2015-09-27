
/******************************************************************************
 * $Id: DisplayModeColumnListView.h
 *
 * Authors:
 *		Fredrik Modéen <fredrik@modeen.se>
 *
 *****************************************************************************/

#ifndef SNES_COLUM_LIST_VIEW
#define SNES_COLUM_LIST_VIEW

#include <ColumnListView.h>
#include <ColumnTypes.h>

class DisplayModeColumnListView : public BColumnListView
{
public:
	DisplayModeColumnListView(BRect rect, const char *name, uint32 resizingMode, uint32 drawFlags);
	~DisplayModeColumnListView();
	virtual void SelectionChanged();
};

#endif /*SNES_COLUM_LIST_VIEW*/
