//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSCreateCommand.h>

@interface FezCreateCommand : NSCreateCommand
{
}

- (id)_createAVChat;
- (id)_createTextChat;
- (id)_createTextChatWithService:(id)arg1 participants:(id)arg2 name:(id)arg3 invitation:(id)arg4;
- (id)_genericIMFromIMHandle:(id)arg1 withText:(id)arg2;
- (BOOL)_verifyParticipants:(id)arg1 areOnService:(id)arg2;
- (BOOL)_retrieveBoolNamed:(id)arg1;
- (long long)_retrieveIntNamed:(id)arg1;
- (id)_retrieveStringNamed:(id)arg1;
- (id)_retrieveAccountNamed:(id)arg1;
- (id)_retrieveParticipantsArrayNamed:(id)arg1;
- (id)_retrieveObjectOfClass:(Class)arg1 named:(id)arg2;
- (id)performDefaultImplementation;

@end

