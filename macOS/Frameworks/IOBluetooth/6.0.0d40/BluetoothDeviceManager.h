//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BluetoothDeviceManager : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedDeviceManager;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (int)getConfiguredTypes:(struct OpaqueIOBluetoothObjectRef *)arg1 andTypes:(unsigned int *)arg2;
- (int)secureBluetooth:(unsigned char)arg1;
- (unsigned char)isBluetoothSecured;
- (int)gainAdministrationPrivileges;
- (int)getPANConnectionState:(struct OpaqueIOBluetoothObjectRef *)arg1;
- (int)setPANConnectionState:(unsigned char)arg1 andDevice:(struct OpaqueIOBluetoothObjectRef *)arg2 andServiceUUID:(unsigned short)arg3;
- (int)removePANDevice:(struct OpaqueIOBluetoothObjectRef *)arg1;
- (int)addPANDevice:(struct OpaqueIOBluetoothObjectRef *)arg1;
- (int)removeSCOAudioDevice:(struct OpaqueIOBluetoothObjectRef *)arg1;
- (int)addSCOAudioDevice:(struct OpaqueIOBluetoothObjectRef *)arg1 andConfigDict:(struct __CFDictionary *)arg2;
- (unsigned char)isConfiguredHIDDevice:(id)arg1;
- (void)ignoreHIDDevice:(struct OpaqueIOBluetoothObjectRef *)arg1;
- (void)removeIgnoredHIDDevice:(struct OpaqueIOBluetoothObjectRef *)arg1;
- (void)configureHIDDevice:(struct OpaqueIOBluetoothObjectRef *)arg1;
- (id)getLocalServices;
- (int)disallowRoleSwitchForDevice:(struct OpaqueIOBluetoothObjectRef *)arg1;
- (int)removeServiceWithRecordHandle:(unsigned int)arg1;
- (int)addServiceDict:(struct __CFDictionary *)arg1 andSDPRecord:(struct OpaqueIOBluetoothObjectRef **)arg2;
- (int)removeCachedValue:(unsigned int)arg1 andKeyString:(struct __CFString *)arg2;
- (int)clearCachedValues:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

