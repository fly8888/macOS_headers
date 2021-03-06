//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class KNMacUILayout, KNSlideCollectionSelection, NSArray, NSMutableDictionary, NSSet, TSKSelectionPath;

@interface KNUIState : NSObject <NSCopying>
{
    TSKSelectionPath *_selectionPath;
    double _mobileCanvasViewScale;
    struct CGPoint _mobileCanvasOffset;
    double _desktopCanvasViewScale;
    struct CGPoint _desktopCanvasOffset;
    NSMutableDictionary *_chartUIState;
    BOOL _slideViewFitsContentInWindow;
    BOOL _lightTableHidesSkippedSlides;
    BOOL _showsMobileLightTable;
    BOOL _mobileLightTableHidesSkippedSlides;
    BOOL _desktopOutlineViewDefaultFixed;
    BOOL _showSlideGuides;
    BOOL _showMasterGuides;
    BOOL _showsComments;
    BOOL _showsRuler;
    KNMacUILayout *_documentUILayout;
    double _lightTableZoomScale;
    double _mobileLightTableZoomScale;
    double _desktopElementListViewWidth;
    double _desktopNavigatorViewWidth;
    double _desktopOutlineViewWidth;
    double _desktopPresenterNotesHeight;
    double _desktopPresenterNotesScrollPosition;
    NSSet *_collapsedSlideNodes;
    NSSet *_outlineCollapsedSlideNodes;
    NSSet *_outlineHasBodySlideNodes;
    NSArray *_elementListExpandedGroups;
    struct CGPoint _desktopMainWindowOrigin;
    struct CGSize _desktopMainContentSize;
}

@property(nonatomic) BOOL showsRuler; // @synthesize showsRuler=_showsRuler;
@property(nonatomic) BOOL showsComments; // @synthesize showsComments=_showsComments;
@property(nonatomic) BOOL showMasterGuides; // @synthesize showMasterGuides=_showMasterGuides;
@property(nonatomic) BOOL showSlideGuides; // @synthesize showSlideGuides=_showSlideGuides;
@property(copy, nonatomic) NSArray *elementListExpandedGroups; // @synthesize elementListExpandedGroups=_elementListExpandedGroups;
@property(copy, nonatomic) NSSet *outlineHasBodySlideNodes; // @synthesize outlineHasBodySlideNodes=_outlineHasBodySlideNodes;
@property(copy, nonatomic) NSSet *outlineCollapsedSlideNodes; // @synthesize outlineCollapsedSlideNodes=_outlineCollapsedSlideNodes;
@property(copy, nonatomic) NSSet *collapsedSlideNodes; // @synthesize collapsedSlideNodes=_collapsedSlideNodes;
@property(nonatomic) BOOL desktopOutlineViewDefaultFixed; // @synthesize desktopOutlineViewDefaultFixed=_desktopOutlineViewDefaultFixed;
@property(nonatomic) double desktopPresenterNotesScrollPosition; // @synthesize desktopPresenterNotesScrollPosition=_desktopPresenterNotesScrollPosition;
@property(nonatomic) double desktopPresenterNotesHeight; // @synthesize desktopPresenterNotesHeight=_desktopPresenterNotesHeight;
@property(nonatomic) double desktopOutlineViewWidth; // @synthesize desktopOutlineViewWidth=_desktopOutlineViewWidth;
@property(nonatomic) double desktopNavigatorViewWidth; // @synthesize desktopNavigatorViewWidth=_desktopNavigatorViewWidth;
@property(nonatomic) double desktopElementListViewWidth; // @synthesize desktopElementListViewWidth=_desktopElementListViewWidth;
@property(nonatomic) struct CGSize desktopMainContentSize; // @synthesize desktopMainContentSize=_desktopMainContentSize;
@property(nonatomic) struct CGPoint desktopMainWindowOrigin; // @synthesize desktopMainWindowOrigin=_desktopMainWindowOrigin;
@property(nonatomic) BOOL mobileLightTableHidesSkippedSlides; // @synthesize mobileLightTableHidesSkippedSlides=_mobileLightTableHidesSkippedSlides;
@property(nonatomic) double mobileLightTableZoomScale; // @synthesize mobileLightTableZoomScale=_mobileLightTableZoomScale;
@property(nonatomic) BOOL showsMobileLightTable; // @synthesize showsMobileLightTable=_showsMobileLightTable;
@property(nonatomic) BOOL lightTableHidesSkippedSlides; // @synthesize lightTableHidesSkippedSlides=_lightTableHidesSkippedSlides;
@property(nonatomic) double lightTableZoomScale; // @synthesize lightTableZoomScale=_lightTableZoomScale;
@property(nonatomic) BOOL slideViewFitsContentInWindow; // @synthesize slideViewFitsContentInWindow=_slideViewFitsContentInWindow;
@property(copy, nonatomic) KNMacUILayout *documentUILayout; // @synthesize documentUILayout=_documentUILayout;
@property(retain, nonatomic) TSKSelectionPath *selectionPath; // @synthesize selectionPath=_selectionPath;
- (void).cxx_destruct;
- (void)saveToArchive:(struct UIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (void)loadFromArchive:(const struct UIStateArchive *)arg1 unarchiver:(id)arg2 context:(id)arg3;
- (id)debugDescription;
- (void)updateOutlineStateFromSlideTree:(id)arg1;
- (id)archivedUIStateInContext:(id)arg1;
@property(nonatomic) struct CGPoint canvasOffset;
@property(nonatomic) double canvasViewScale;
- (void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2;
@property(readonly, nonatomic) KNSlideCollectionSelection *slideTreeSelection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;

@end

