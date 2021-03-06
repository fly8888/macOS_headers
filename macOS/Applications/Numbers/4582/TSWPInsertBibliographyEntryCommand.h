//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPTextCommand.h"

#import "TSWPSelectionPathTransformationOperationProvider-Protocol.h"
#import "TSWPStorageTransactionDelegate-Protocol.h"

@class NSArray, NSString, TSUUUIDPath, TSWPEndNoteBibliographyPlan;

@interface TSWPInsertBibliographyEntryCommand : TSWPTextCommand <TSWPSelectionPathTransformationOperationProvider, TSWPStorageTransactionDelegate>
{
    TSWPEndNoteBibliographyPlan *_bibliographyPlan;
    NSString *_previousBibliographyFormat;
    BOOL emitOperations;
}

@property(nonatomic) BOOL emitOperations; // @synthesize emitOperations;
- (void)p_swapUndoRedoBibliographyFormat;
- (id)p_getAndSetDocumentBibliographyFormat:(id)arg1;
- (void)didUpdateStyleForAttachment:(id)arg1;
- (BOOL)didTransformFromOperation:(id)arg1 toOperation:(id)arg2 objectAddress:(id)arg3 firstPass:(BOOL)arg4;
- (void)transformStorageActionForIdPlacementPlacementOperation:(const struct TSWPStorageAction *)arg1 transformedOperation:(id)arg2 transformedActions:(vector_e5fc8613 *)arg3 firstPass:(BOOL)arg4;
- (BOOL)willTransformFromOperation:(id)arg1 objectAddress:(id)arg2 firstPass:(BOOL)arg3;
- (id)willAddOperation:(id)arg1 objectAddress:(id)arg2 firstPass:(BOOL)arg3;
- (BOOL)transformationRequiresTwoPasses;
- (BOOL)wasObjectMoved:(id)arg1;
- (void)didRunAttachmentTableAction:(const struct TSWPStorageAction *)arg1 currentObject:(id)arg2;
- (void)willRunAttachmentTableAction:(const struct TSWPStorageAction *)arg1 objectToApply:(id)arg2;
- (void)setIndex:(int)arg1 forObject:(id)arg2;
- (BOOL)delegateShouldAssignPlacementIndex;
- (id)actionObjectForUUIDPath:(id)arg1;
- (int)indexForObject:(id)arg1;
- (BOOL)shouldDeepCopyUndoObjects;
@property(readonly, nonatomic) BOOL shouldMigrateStyles;
@property(readonly, nonatomic) TSUUUIDPath *storageUUIDPath;
@property(readonly, nonatomic) NSArray *operations;
- (int)persistenceKind;
- (void)doCommit;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 applyBibliographyPlan:(id)arg2;
- (void)redo;
- (void)undo;

@end

