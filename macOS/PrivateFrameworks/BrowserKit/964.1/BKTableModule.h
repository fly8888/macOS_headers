//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BrowserKit/BKArrangedItemsModule.h>

@class NSString;

@interface BKTableModule : BKArrangedItemsModule
{
    NSString *_columnLayoutName;
    struct {
        unsigned int _autoUpdateColumnLayout:1;
        unsigned int _autoSaveUserModifiedColumnLayout:1;
        unsigned int _registeredForNotifications:1;
        unsigned int _viewIsTableView:1;
        unsigned int _isTopInset:1;
        unsigned int _isContentControllerBound:1;
        unsigned int _unused:26;
    } _tableModuleFlags;
    void *_reservedTableModule1;
    void *_reservedTableModule2;
    void *_reservedTableModule3;
}

+ (void)updateConfigurationWith:(id)arg1;
+ (id)transformItemKeyDescriptionVersion1toVersion2:(id)arg1;
+ (id)columnLayoutWithName:(id)arg1;
+ (id)columnLayouts;
+ (id)viewTypeMenuGlyph;
+ (id)viewTypeMenuLabel;
- (BOOL)_isContentControllerBound;
- (void)_setTopInset:(BOOL)arg1;
- (id)menuForEvent:(id)arg1 item:(id)arg2 badgeIdentifier:(id)arg3;
- (void)doubleClickAction:(id)arg1;
- (void)_badgeButtonClicked:(id)arg1;
- (void)removeTableColumnNotifications;
- (void)addTableColumnNotifications;
- (id)browserOptionsDictionary;
- (id)savedLayoutKeyWithLayoutName:(id)arg1;
- (void)saveCurrentColumnLayout;
- (id)currentColumnLayout;
- (id)layoutForColumn:(id)arg1;
- (id)addColumnFor:(id)arg1;
- (void)setItemSize:(double)arg1;
- (void)updateTableColumnLineBreakMode;
- (void)updateLineBreakModeForColumn:(id)arg1;
- (void)updateLayoutBasedOnItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didChangeValueForKey:(id)arg1;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (id)contentLayoutDictionary;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (struct CGSize)viewMinSize;
- (id)view;
- (id)initWithModuleNibName:(id)arg1;
- (void)updateModuleConnectorStateCacheIfNeeded;
- (void)_registerForDraggedTypes:(id)arg1;
- (void)setAvoidsEmptySelection:(BOOL)arg1;
- (void)setAllowsEmptySelection:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)viewControlsSorting;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)editDisplayNameForItem:(id)arg1;
- (id)getColumnLayout;
- (void)setColumnLayoutByName:(id)arg1;
- (void)setColumnLayoutByName:(id)arg1 mergeWithSavedLayouts:(BOOL)arg2;
- (void)setAutoSaveUserModifiedColumnLayout:(BOOL)arg1;
- (BOOL)autoSaveUserModifiedColumnLayout;
- (void)setAutoUpdateColumnLayout:(BOOL)arg1;
- (BOOL)autoUpdateColumnLayout;
- (void)setColumnLayout:(id)arg1;
- (double)maxItemSize;
- (double)minItemSize;
- (id)initWithTableViewAsView;
- (id)columnLayoutWithName:(id)arg1 mergeWithSavedLayouts:(BOOL)arg2;

@end

