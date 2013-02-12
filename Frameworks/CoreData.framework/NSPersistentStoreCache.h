/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreCache : NSObject {
    unsigned int _capacity;
    id _externalData;
}

+ (void)initialize;

- (void)_growRegistrationCollectionTo:(unsigned int)arg1;
- (void)dealloc;
- (void)decrementRefCountForObjectID:(id)arg1;
- (id)externalDataForObjectID:(id)arg1 timestamp:(double)arg2;
- (id)externalDataForSourceObjectID:(id)arg1 key:(id)arg2 timestamp:(double)arg3;
- (void)forgetAllExternalData;
- (void)forgetExternalDataForObjectID:(id)arg1;
- (void)incrementRefCountForObjectID:(id)arg1;
- (id)init;
- (unsigned int)optionsForObjectID:(id)arg1;
- (int)refCountForObjectID:(id)arg1;
- (void)registerExternalData:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (void)registerExternalData:(id)arg1 forSourceObjectID:(id)arg2 key:(id)arg3 options:(unsigned int)arg4 andTimestamp:(double)arg5;

@end