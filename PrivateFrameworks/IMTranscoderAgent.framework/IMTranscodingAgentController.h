/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMTranscodingAgentController : NSObject {
    NSArray * _fallbackTranscoders;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _transcoders;
}

+ (id)sharedInstance;

- (id)_findTranscoderForUTI:(id)arg1;
- (void)_registerTranscoders;
- (void)dealloc;
- (id)init;
- (BOOL)shouldProcessFileTransfer:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 target:(int)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long)arg6;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(int)arg4 sizes:(id)arg5 maxDimension:(unsigned long)arg6 transcoderUserInfo:(id)arg7 representations:(int)arg8 completionBlock:(id /* block */)arg9;
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 fallBack:(BOOL)arg4 completionBlock:(id /* block */)arg5;

@end
