/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVGetTask : CoreDAVTask {
    id _appSpecificDataItemResult;
}

@property <CoreDAVTaskDelegate> *delegate;
@property(retain) id appSpecificDataItemResult;

- (id)appSpecificDataItemResult;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithURL:(id)arg1;
- (id)requestBody;
- (void)setAppSpecificDataItemResult:(id)arg1;

@end