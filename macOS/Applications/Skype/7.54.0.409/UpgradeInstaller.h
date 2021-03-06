//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTask;
@protocol UpgradeInstallerDelegate;

@interface UpgradeInstaller : NSObject
{
    BOOL _isStealthUpgrade;
    BOOL _isObservingNotifications;
    NSString *_sourcePath;
    NSString *_destinationPath;
    id <UpgradeInstallerDelegate> _delegate;
    unsigned long long _installerProgress;
    unsigned long long _installerExitCode;
    NSTask *_installerTask;
    NSString *_installerToolPath;
    NSString *_installerLaunchPath;
}

+ (BOOL)isElevatedPrivilegesRequiredForWritingToPath:(id)arg1;
+ (void)performPostInstallCleanupCheck;
+ (id)launcherSocketPath;
+ (id)launcherLaunchPath;
+ (id)installerLaunchPath;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)installerWithUpgradeType:(BOOL)arg1;
@property(copy, nonatomic) NSString *installerLaunchPath; // @synthesize installerLaunchPath=_installerLaunchPath;
@property(copy, nonatomic) NSString *installerToolPath; // @synthesize installerToolPath=_installerToolPath;
@property(retain, nonatomic) NSTask *installerTask; // @synthesize installerTask=_installerTask;
@property(nonatomic) unsigned long long installerExitCode; // @synthesize installerExitCode=_installerExitCode;
@property(nonatomic) unsigned long long installerProgress; // @synthesize installerProgress=_installerProgress;
@property(nonatomic) BOOL isObservingNotifications; // @synthesize isObservingNotifications=_isObservingNotifications;
@property(nonatomic) BOOL isStealthUpgrade; // @synthesize isStealthUpgrade=_isStealthUpgrade;
@property(nonatomic) __weak id <UpgradeInstallerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
- (void).cxx_destruct;
- (BOOL)start:(id *)arg1;
- (long long)_launchedInstallerTool;
- (long long)_messageInstallerTool;
- (id)_argumentsFromCurrentProcess;
- (BOOL)_prepareInstallerToolWithError:(id *)arg1 usePrivilegedHelper:(char *)arg2;
- (BOOL)_installHelperToolsForPrivilegedUpgrade:(id *)arg1;
- (BOOL)_blessInstallerToolWithError:(id *)arg1;
- (BOOL)_submitLauncherWithError:(id *)arg1;
- (struct AuthorizationOpaqueRef *)_createHelperToolAuthorizationWithError:(id *)arg1;
- (BOOL)_isDestinationPathValid:(id *)arg1;
- (BOOL)_requiredFilesExist:(id *)arg1;
- (void)_threadWaitForInstallerTool;
- (long long)_waitForInstallerTool;
- (void)_finishedWaitingForInstallerTool:(id)arg1;
- (BOOL)_canSetupSignalHandlers;
- (void)_resetSignalHandlers;
- (void)updateProgressNotification:(id)arg1;
- (void)stopObservingInstallerNotifications;
- (void)startObservingInstallerNotifications;
- (void)_cleanupFiles;
- (void)dealloc;
- (id)initWithUpgradeType:(BOOL)arg1;

@end

