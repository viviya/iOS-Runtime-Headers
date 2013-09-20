/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSRecursiveLock, NSString, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject {
    PFUbiquityGlobalObjectIDCache *_gidCache;
    NSString *_localPeerID;
    NSMutableDictionary *_transactionLogCache;
    NSRecursiveLock *_transactionLogCacheLock;
}

- (void)cacheExportedLog:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2;
- (void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2;
- (id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(BOOL)arg2 error:(id*)arg3;

@end