//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"
#import "KNAsyncProcessChangesSelectionUpdatingCommand-Protocol.h"
#import "KNBuildOrChunkUpdatingCommand-Protocol.h"

@class NSArray, NSString, NSUUID;

@interface KNCommandBuildUpdateChunkCount : TSKCommand <GSSPAutoEncodable, KNBuildOrChunkUpdatingCommand, KNAsyncProcessChangesSelectionUpdatingCommand>
{
    NSUUID *_slideId;
    NSArray *_drawableIds;
    NSArray *_expectedDeliveryStyleTuples;
    NSArray *_chunksToAdd;
    NSArray *_identifiersForChunksToInsertAfter;
    NSArray *_identifiersForChunksToRemove;
    NSArray *_tuplesToUpdate;
    BOOL _needsAsyncProcessChangesSelectionUpdate;
    NSArray *_oldTuplesToUpdate;
    NSArray *_identifiersForAddedChunks;
    NSArray *_generatedIdentifiers;
    NSArray *_removedChunks;
    NSArray *_identifiersForChunksPriorToRemovedChunks;
    NSArray *_chunksRemovedDuringUndo;
    NSArray *_chunksAddedDuringUndo;
    NSArray *_oldDeliveryStyleTuples;
    NSArray *_oldChunkIDSeeds;
    NSArray *_oldChunkIdentifiers;
    NSArray *_workingBuilds;
}

+ (void)removeChunks:(id)arg1 identifiersToRollback:(id)arg2 needsAsyncProcessChangesSelectionUpdate:(BOOL)arg3 oldTuplesToUpdate:(id *)arg4 removedChunks:(id *)arg5 identifiersForChunksPriorToRemovedChunks:(id *)arg6;
+ (void)addChunks:(id)arg1 chunkToAddToIdentifierToInsertAfterMap:(id)arg2 needsAsyncProcessChangesSelectionUpdate:(BOOL)arg3 oldTuplesToUpdate:(id *)arg4 identifiersForAddedChunks:(id *)arg5 generatedIdentifiers:(id *)arg6;
+ (id)chunkToIdentifierMapForChunks:(id)arg1 identifiers:(id)arg2;
+ (id)chunksToRemoveAccountingForExpectedChunkCountForBuild:(id)arg1 identifiersForChunksToRemove:(id)arg2;
+ (id)chunksToAddForBuild:(id)arg1 respectingPreviouslyDeterminedChunksToAdd:(id)arg2;
+ (id)filteredChunksToRemoveInChunks:(id)arg1 onSlide:(id)arg2;
+ (id)filteredChunksToAddInChunks:(id)arg1 onSlide:(id)arg2;
@property(readonly, nonatomic) NSArray *oldTuplesToUpdate; // @synthesize oldTuplesToUpdate=_oldTuplesToUpdate;
@property(nonatomic) BOOL needsAsyncProcessChangesSelectionUpdate; // @synthesize needsAsyncProcessChangesSelectionUpdate=_needsAsyncProcessChangesSelectionUpdate;
@property(readonly, nonatomic) BOOL mayChangeChunkCount;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) NSArray *tuplesToUpdate;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)coalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (BOOL)canCoalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (void)redo;
- (void)p_verifyRollbackSuccess;
- (void)p_undo;
- (void)undo;
- (id)p_oldTuplesToUpdateByRemovingChunks:(id)arg1;
- (id)p_oldTuplesToUpdateByAddingChunks:(id)arg1 chunkToAddToIdentifierToInsertAfterMap:(id)arg2;
- (id)p_chunksToRemoveAccountingForExpectedChunkCountForBuilds:(id)arg1;
- (id)p_buildToExpectedDeliveryStyleMap;
- (id)p_chunksToAdd:(id)arg1 accountingForExpectedChunkCountForBuilds:(id)arg2;
- (id)p_deepCopiedChunkToIdentifierToInsertAfterMapForFilteredChunks:(id)arg1 deepCopiedFilteredChunks:(id)arg2;
- (void)commit;
- (BOOL)process;
@property(readonly, copy) NSString *debugDescription;
- (id)p_slide;
- (id)p_builds;
- (id)p_drawables;
- (void)p_clearUndoState;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)initWithDrawables:(id)arg1;
- (id)initWithDrawables:(id)arg1 expectedDeliveryStyleTuples:(id)arg2 chunksToAdd:(id)arg3 identifiersForChunksToInsertAfter:(id)arg4 identifiersForChunksToRemove:(id)arg5 tuplesToUpdate:(id)arg6;
- (void)deallocSOS;
- (void)populateGSSPCmdBuildUpdateChunkCount:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct CommandBuildUpdateChunkCountArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct CommandBuildUpdateChunkCountArchive *)arg1 unarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

