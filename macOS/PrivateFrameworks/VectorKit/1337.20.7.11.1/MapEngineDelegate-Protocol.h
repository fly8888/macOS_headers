//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@protocol MapEngineDelegate <NSObject>
- (void)nearestVenueDidChange:(const struct Venue *)arg1 building:(const struct VenueBuilding *)arg2;
- (_Bool)wantsTimerTick;
- (void)didPresent;
- (void)willLayoutWithTimestamp:(double)arg1;
@end

