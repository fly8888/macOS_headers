//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface ToolbarHostedViewItem : NSObject
{
    CALayer *_layer;
    BOOL _isTemporarilyDisconnected;
    BOOL _isDisabled;
}

@property(nonatomic, setter=setDisabled:) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) BOOL isTemporarilyDisconnected; // @synthesize isTemporarilyDisconnected=_isTemporarilyDisconnected;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)disconnectFromIxHost;
- (void)connectToIxHost:(id)arg1;
- (void)layerSizeDidChange:(id)arg1 forceLayout:(BOOL)arg2;
- (id)init;

@end

