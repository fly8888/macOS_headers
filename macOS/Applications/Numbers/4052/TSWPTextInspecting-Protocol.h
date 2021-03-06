//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexSet, TSDInteractiveCanvasController, TSKDocumentRoot, TSSPropertyMap, TSWPListStyle, TSWPParagraphStyle;

@protocol TSWPTextInspecting <NSObject>
- (void)useAllLigatures:(id)arg1;
- (void)turnOffLigatures:(id)arg1;
- (void)useStandardLigatures:(id)arg1;
- (void)outline:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)underline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (BOOL)inspectingShapeForInspector:(id)arg1;
- (BOOL)inspectableForInspector:(id)arg1;
- (TSKDocumentRoot *)documentRootForInspector:(id)arg1;
- (TSDInteractiveCanvasController *)interactiveCanvasControllerForInspector:(id)arg1;
- (int)valueForVerticalAlignmentPropertyForInspector:(id)arg1;
- (void)alignNatural:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignLeft:(id)arg1;
- (int)valueForWritingDirectionPropertyForInspector:(id)arg1;
- (int)valueForParagraphAlignmentPropertyForInspector:(id)arg1;
- (NSIndexSet *)valueForBIUProperties:(NSArray *)arg1 forInspector:(id)arg2;
- (void)inspector:(id)arg1 applyWritingDirection:(long long)arg2;
- (void)inspector:(id)arg1 applyTextStylePreset:(TSWPParagraphStyle *)arg2 stripCharacterStyles:(BOOL)arg3;
- (void)inspector:(id)arg1 applyShapeValue:(id)arg2 forProperty:(int)arg3;
- (void)inspector:(id)arg1 applyFormatValue:(id)arg2 forProperty:(int)arg3 coalesceable:(BOOL)arg4;
- (void)inspector:(id)arg1 applyListStyle:(TSWPListStyle *)arg2 createVariationUsingPropertyMap:(TSSPropertyMap *)arg3;
- (void)inspector:(id)arg1 applyListStyleOverrideForCurrentSelectionWithValue:(id)arg2 forProperty:(int)arg3;
- (void)inspector:(id)arg1 applyParagraphStyle:(TSWPParagraphStyle *)arg2 stripCharacterStyles:(BOOL)arg3;
- (void)inspector:(id)arg1 toggleIntProperty:(int)arg2 onValue:(int)arg3 offValue:(int)arg4;
- (void)inspector:(id)arg1 toggleBoolProperty:(int)arg2;
- (TSWPParagraphStyle *)currentParagraphStyleForInspector:(id)arg1;
- (BOOL)canProvideTextStylePresets;

@optional
- (BOOL)supportParagraphAlignmentInInspectors;
- (void)togglePlaceholderText;
- (BOOL)selectionIsPlaceholderText;
@end

