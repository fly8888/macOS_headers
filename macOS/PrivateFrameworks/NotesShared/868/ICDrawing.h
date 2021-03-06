//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/NSCopying-Protocol.h>

@class NSDate, NSMutableOrderedSet, NSOrderedSet, NSUUID, TTVectorMultiTimestamp;

@interface ICDrawing : NSObject <NSCopying>
{
    NSMutableOrderedSet *_commands;
    NSMutableOrderedSet *_visibleCommands;
    long long _orientation;
    struct CGRect _unrotatedBoundsInCommandSpace;
    struct CGRect _commandBounds;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSDate *_orientationTimestamp;
    struct CGSize _unrotatedSize;
}

+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultPixelSize;
+ (struct CGAffineTransform)orientationTransform:(long long)arg1 size:(struct CGSize)arg2;
+ (struct CGAffineTransform)defaultSizeOrientationTransform:(long long)arg1;
+ (struct CGSize)fullSize:(struct CGSize)arg1 forOrientation:(long long)arg2;
+ (void)sortCommands:(id)arg1;
@property(nonatomic) struct CGRect unrotatedBoundsInCommandSpace; // @synthesize unrotatedBoundsInCommandSpace=_unrotatedBoundsInCommandSpace;
@property(retain, nonatomic) NSDate *orientationTimestamp; // @synthesize orientationTimestamp=_orientationTimestamp;
@property(nonatomic) struct CGSize unrotatedSize; // @synthesize unrotatedSize=_unrotatedSize;
@property(readonly, nonatomic) NSOrderedSet *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
- (void).cxx_destruct;
- (struct CGAffineTransform)orientationTransform;
@property(readonly, nonatomic) struct CGRect fullBounds;
- (struct CGSize)fullSize;
- (unsigned long long)mergeWithDrawing:(id)arg1;
- (id)setCommand:(id)arg1 hidden:(BOOL)arg2;
- (void)addNewCommand:(id)arg1;
- (id)visibleCommandForInsertingCommand:(id)arg1;
- (void)setCommandIDForInsertion:(id)arg1;
- (id)insertNewTestCommand;
- (struct ICDrawingCommandID)commandIDForNewCommand;
- (void)sortCommands;
- (BOOL)setTransientOrientation:(long long)arg1;
@property(readonly, nonatomic) BOOL canChangeTransientOrientation;
@property(nonatomic) long long orientation;
- (void)takeOrientationFrom:(id)arg1;
- (void)invalidateBounds;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)commandBounds;
- (struct CGRect)calculateCommandBounds;
@property(readonly, nonatomic) NSOrderedSet *visibleCommands;
- (id)mutableCommands;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCommands:(id)arg1 fromDrawing:(id)arg2;
- (id)initWithDrawing:(id)arg1;
- (id)initWithReplicaID:(id)arg1;
- (id)init;
- (id)serializeWithPathData:(BOOL)arg1 toVersion:(unsigned int *)arg2;
- (id)serializeWithPathData:(BOOL)arg1;
- (unsigned int)saveToArchive:(struct Drawing *)arg1 withPathData:(BOOL)arg2;
- (id)initWithArchive:(const struct Drawing *)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;

@end

