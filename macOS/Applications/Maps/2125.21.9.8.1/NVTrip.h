//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NVSerializableObject.h"

@class GEODirectionsRequest, GEODirectionsResponse, MSPBookmarkStorage, MSPHistoryEntryStorage, NSArray, NSString, NSURL, NVPlace;

__attribute__((visibility("hidden")))
@interface NVTrip : NVSerializableObject
{
    NSArray *_places;
    unsigned long long _directionMode;
    GEODirectionsRequest *_geoRequest;
    GEODirectionsResponse *_geoResponse;
}

+ (id)keyPathsForValuesAffectingDestinationTitle;
+ (id)keyPathsForValuesAffectingOriginTitle;
+ (id)serializedKeys;
+ (BOOL)supportsSearchRequestStorage:(id)arg1;
+ (id)_bookmarksTripWithPlaces:(id)arg1 routeRequestStorage:(id)arg2 mode:(unsigned long long)arg3;
+ (id)bookmarksTripWithRecentsOrBookmarksTrip:(id)arg1;
+ (id)bookmarksTripWithPlaces:(id)arg1 mode:(unsigned long long)arg2;
+ (id)_recentsTripWithPlaces:(id)arg1 routeRequestStorage:(id)arg2 mode:(unsigned long long)arg3;
+ (id)recentsTripWithRecentsOrBookmarksTrip:(id)arg1;
+ (id)recentsTripWithPlaces:(id)arg1 mode:(unsigned long long)arg2;
+ (id)keyPathsForValuesAffectingDestinationPlace;
+ (id)keyPathsForValuesAffectingOriginPlace;
+ (id)privatePasteboardType;
@property(retain, nonatomic) GEODirectionsResponse *geoResponse; // @synthesize geoResponse=_geoResponse;
@property(retain, nonatomic) GEODirectionsRequest *geoRequest; // @synthesize geoRequest=_geoRequest;
@property unsigned long long directionMode; // @synthesize directionMode=_directionMode;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *title;
- (id)description;
@property(readonly) NSString *destinationTitle;
@property(readonly) NSString *originTitle;
- (id)titleForPlace:(id)arg1;
@property(readonly) NVPlace *destinationPlace;
@property(readonly) NVPlace *originPlace;
- (unsigned long long)serializationObjectType;
- (void)updateWithRouteRequestStorage:(id)arg1;
- (void)_setPlaces:(id)arg1 sourcedFromRouteRequestStorage:(BOOL)arg2;
@property(copy) NSArray *places; // @synthesize places=_places;
- (id)copy;
- (id)initWithBookmarkStorage:(id)arg1;
- (id)initWithSearchRequestStorage:(id)arg1;
- (id)init;
- (id)_initWithPlaces:(id)arg1 directionMode:(unsigned long long)arg2;
- (id)bookmarkRepresentation;
- (id)initWithBookmarkRepresentation:(id)arg1;
- (id)mapsURLfromMapView:(id)arg1;
- (id)mapsURL;
@property(readonly, nonatomic) NSURL *sharingURL;
- (id)addressPartOfMapsURLForPlace:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)listIcon;
- (id)_altSearchString;
- (id)_mainSearchString;
- (id)initWithRouteHistoryEntryIfSupported:(id)arg1;
- (id)initWithFavoriteRoute:(id)arg1;

// Remaining properties
@property(copy, nonatomic) MSPBookmarkStorage *bookmarkStorage; // @dynamic bookmarkStorage;
@property(copy, nonatomic) MSPHistoryEntryStorage *historyStorage; // @dynamic historyStorage;

@end

