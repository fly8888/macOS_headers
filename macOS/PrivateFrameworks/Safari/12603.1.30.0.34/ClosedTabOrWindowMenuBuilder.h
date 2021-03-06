//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMenu, NSMutableSet;

__attribute__((visibility("hidden")))
@interface ClosedTabOrWindowMenuBuilder : NSObject
{
    NSMenu *_menu;
    NSArray *_closedTabOrWindowStates;
    NSMutableSet *_addedURLStringsToTopLevelMenu;
    long long _limit;
    long long _menuItemForTabPolicy;
    long long _menuItemForWindowPolicy;
    long long _menuItemForTabGroupPolicy;
    long long _tabRestoreDestination;
    unsigned long long _menuItemDeduplicationPolicy;
}

+ (unsigned long long)numberOfMenuItemsForStates:(id)arg1 withWindowItemPolicy:(long long)arg2;
@property(nonatomic) unsigned long long menuItemDeduplicationPolicy; // @synthesize menuItemDeduplicationPolicy=_menuItemDeduplicationPolicy;
@property(nonatomic) long long tabRestoreDestination; // @synthesize tabRestoreDestination=_tabRestoreDestination;
@property(nonatomic) long long menuItemForTabGroupPolicy; // @synthesize menuItemForTabGroupPolicy=_menuItemForTabGroupPolicy;
@property(nonatomic) long long menuItemForWindowPolicy; // @synthesize menuItemForWindowPolicy=_menuItemForWindowPolicy;
@property(nonatomic) long long menuItemForTabPolicy; // @synthesize menuItemForTabPolicy=_menuItemForTabPolicy;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (void)_addMenuItemToTopLevelMenu:(id)arg1;
- (long long)_numberOfTopLevelMenuItemsToBeAddedForTabGroupState:(id)arg1;
- (long long)_numberOfTopLevelMenuItemsToBeAddedForWindowState:(id)arg1;
- (void)_appendToMenuUsingTabGroupPolicy:(id)arg1;
- (void)_appendToMenuUsingWindowPolicy:(id)arg1;
- (void)_appendToMenuUsingTabPolicy:(id)arg1;
- (void)_resetMenu;
- (id)buildClosedTabOrWindowMenu;
- (BOOL)_shouldDeduplicateMenuItemForTopLevelMenuByURLString:(id)arg1;
- (BOOL)_shouldDeduplicateMenuItemForTopLevelMenu:(id)arg1;
- (BOOL)_tabStateIsShowingNativeContent:(id)arg1;
- (id)_firstNonDisposableTabStateInWindowState:(id)arg1;
- (id)_menuItemForReopenTabGroupState:(id)arg1;
- (id)_menuItemForReopenWindowState:(id)arg1;
- (SEL)_selectorForTabReopenDestination;
- (id)_itemIconForURLString:(id)arg1;
- (id)_urlStringForMenuItem:(id)arg1;
- (id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabsWithMultipleNonDisposableTabs:(id)arg1;
- (id)_menuItemForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabsWithSingleNonDisposableTab:(id)arg1;
- (id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoIndentedTabs:(id)arg1;
- (id)_menuItemsForTabGroupItemPolicyExpandTabGroupsIntoTabs:(id)arg1;
- (id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenuWithMultipleNonDisposableTabs:(id)arg1;
- (id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenuWithSingleNonDisposableTab:(id)arg1;
- (id)_menuItemForTabGroupItemPolicyCollapseTabGroupsIntoSubmenu:(id)arg1;
- (id)_menuItemsForWindowItemPolicyExpandWindowsIntoIndentedTabsWithMultipleNonDispoasbleTabs:(id)arg1;
- (id)_menuItemForWindowItemPolicyExpandWindowsIntoIndentedTabsWithSingleNonDisposableTab:(id)arg1;
- (id)_menuItemsForWindowItemPolicyExpandWindowsIntoIndentedTabs:(id)arg1;
- (id)_menuItemsForWindowItemPolicyExpandWindowsIntoTabs:(id)arg1;
- (id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenuWithMultipleNonDisposableTabs:(id)arg1;
- (id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenuWithSingleNonDisposableTab:(id)arg1;
- (id)_menuItemForWindowItemPolicyCollapseWindowsIntoSubmenu:(id)arg1;
- (id)_menuItemForTabItemPolicyHideNativeTabs:(id)arg1;
- (id)_menuItemForTabItemPolicyShowNativeTabs:(id)arg1;
- (id)urlStringsInTopLevelMenu;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

