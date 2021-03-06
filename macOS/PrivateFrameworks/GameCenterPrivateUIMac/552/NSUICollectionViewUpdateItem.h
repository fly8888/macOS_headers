//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface NSUICollectionViewUpdateItem : NSObject
{
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_finalIndexPath;
    long long _updateAction;
    id _gap;
}

@property(readonly, nonatomic) long long updateAction; // @synthesize updateAction=_updateAction;
@property(readonly, retain, nonatomic) NSIndexPath *indexPathAfterUpdate; // @synthesize indexPathAfterUpdate=_finalIndexPath;
@property(readonly, retain, nonatomic) NSIndexPath *indexPathBeforeUpdate; // @synthesize indexPathBeforeUpdate=_initialIndexPath;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (BOOL)_isSectionOperation;
- (void)_setGap:(id)arg1;
- (id)_gap;
- (id)_indexPath;
- (long long)_action;
- (id)description;
- (void)_setNewIndexPath:(id)arg1;
- (id)_newIndexPath;
- (void)dealloc;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;

@end

