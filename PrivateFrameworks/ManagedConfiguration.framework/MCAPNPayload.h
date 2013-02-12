/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray;

@interface MCAPNPayload : MCPayload {
    NSArray *_apnInfos;
    BOOL _wasInstalled;
}

@property BOOL wasInstalled;

+ (id)apnDomainName;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (BOOL)_checkForValidContents:(id)arg1 outError:(id*)arg2;
- (void)_finishInitializationWithContents:(id)arg1;
- (id)_strippedAPNDefaults;
- (id)_validationErrorType:(int)arg1 forInvalidKey:(id)arg2;
- (id)apnDefaults;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setWasInstalled:(BOOL)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (BOOL)wasInstalled;

@end