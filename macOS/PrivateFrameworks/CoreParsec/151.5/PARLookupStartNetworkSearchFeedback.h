//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFStartNetworkSearchFeedback.h>

@interface PARLookupStartNetworkSearchFeedback : SFStartNetworkSearchFeedback
{
    long long _lookupSelectionType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long lookupSelectionType; // @synthesize lookupSelectionType=_lookupSelectionType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 lookupSelectionType:(long long)arg6;

@end

