/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSString;

@interface MCPlainCertificatePayload : MCCertificatePayload {
    NSData *_certificateData;
    NSString *_certificateFileName;
    int _dataEncoding;
    NSString *_password;
}

@property(readonly) NSData * certificateData;
@property(readonly) NSString * certificateFileName;
@property(readonly) int dataEncoding;
@property(readonly) NSString * password;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (id)certificateData;
- (id)certificateFileName;
- (struct __SecCertificate { }*)copyCertificate;
- (int)dataEncoding;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (BOOL)isIdentity;
- (BOOL)isSigned;
- (id)password;
- (id)persistentResourceID;

@end