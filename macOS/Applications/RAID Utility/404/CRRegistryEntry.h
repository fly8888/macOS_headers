//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSMutableSet;

@interface CRRegistryEntry : NSObject <NSCopying>
{
    struct __CRRegistryEntry *_rentry;
    NSDictionary *_properties;
    NSMutableSet *_children;
    Class _childClass;
}

+ (id)entryWithRef:(struct __CRRegistryEntry *)arg1;
+ (id)entryAtPath:(id)arg1 fromDevice:(id)arg2;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingName;
- (void)setUsesShapes:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localizedPropertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)properties;
- (id)children;
- (id)name;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)initWithEntryRef:(struct __CRRegistryEntry *)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_updateEntrySet:(id)arg1 withChangesForKey:(id)arg2 fromEntryRefArray:(id)arg3 entryClass:(Class)arg4;
- (void)_addToSet:(id)arg1 fromEntryRefArray:(id)arg2 entryClass:(Class)arg3;
- (void)_noteEntryChanged:(id)arg1;
- (void)_setProperties:(id)arg1;
- (void)_setChildren:(id)arg1;
- (void)_setClassOfChildren:(Class)arg1;
- (Class)_classOfChildren;
- (struct __CRRegistryEntry *)_rentry;
- (long long)compareName:(id)arg1;
- (id)subTitle;
- (id)title;
- (id)image;
- (id)statusImage;

@end

