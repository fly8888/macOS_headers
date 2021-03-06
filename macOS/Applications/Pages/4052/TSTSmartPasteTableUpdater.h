//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSString, TSTTableInfo;

@interface TSTSmartPasteTableUpdater : NSObject
{
    TSTTableInfo *_tableInfo;
    NSMutableIndexSet *_rowsRemoved;
    NSString *_specializedTableType;
}

@property(retain, nonatomic) NSString *specializedTableType; // @synthesize specializedTableType=_specializedTableType;
@property(retain, nonatomic) NSMutableIndexSet *rowsRemoved; // @synthesize rowsRemoved=_rowsRemoved;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (BOOL)p_sourceDataHasPrimaryKeysInRange:(struct TSUCellRect)arg1;
- (BOOL)p_specializedPartialUpdateIsSupported;
- (BOOL)p_specializedTableFullUpdateIsSupported;
- (id)p_singleRowTableFromIndex:(unsigned short)arg1;
- (id)remainingTable;
- (void)enumerateUpdatesOntoDestination:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithUpdatesFromTable:(id)arg1 specializedTableType:(id)arg2;

@end

