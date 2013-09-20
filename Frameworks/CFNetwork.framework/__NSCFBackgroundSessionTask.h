/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class <NDBackgroundSessionProtocol>, __NSCFURLSession;

@interface __NSCFBackgroundSessionTask : __NSCFURLSessionTask {
    unsigned int _ident;
    <NDBackgroundSessionProtocol> *_remoteSession;
    __NSCFURLSession *_session;
}

@property(readonly) unsigned int ident;
@property(retain) <NDBackgroundSessionProtocol> * remoteSession;
@property(retain) __NSCFURLSession * session;

- (void)_onqueue_connection_cancel;
- (void)_onqueue_connection_resume;
- (void)_onqueue_connection_suspend;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(id)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)dealloc;
- (unsigned int)ident;
- (id)initWithLocalTask:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned int)arg4;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned int)arg4;
- (id)remoteSession;
- (id)session;
- (void)setRemoteSession:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTaskDescription:(id)arg1;

@end