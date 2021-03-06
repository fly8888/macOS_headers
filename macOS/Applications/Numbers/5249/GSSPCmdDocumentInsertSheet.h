//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPCmdBase.h"

#import "GSSPAutoDecodable-Protocol.h"

@class NSArray;

@interface GSSPCmdDocumentInsertSheet : GSSPCmdBase <GSSPAutoDecodable>
{
    NSArray *mSheetList;
    NSArray *mArgsList;
    BOOL mAllowSameSheetNameAsForms;
    BOOL mForPaste;
    BOOL mDefinedAllowSameSheetNameAsForms;
    BOOL mDefinedForPaste;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedForPaste; // @synthesize definedForPaste=mDefinedForPaste;
@property(readonly, nonatomic) BOOL definedAllowSameSheetNameAsForms; // @synthesize definedAllowSameSheetNameAsForms=mDefinedAllowSameSheetNameAsForms;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (BOOL)clearForPaste;
- (BOOL)clearAllowSameSheetNameAsForms;
- (void)setForPaste:(BOOL)arg1;
- (BOOL)forPaste;
- (void)setAllowSameSheetNameAsForms:(BOOL)arg1;
- (BOOL)allowSameSheetNameAsForms;
- (void)setArgsList:(id)arg1;
- (id)argsList;
- (void)setSheetList:(id)arg1;
- (id)sheetList;

@end

