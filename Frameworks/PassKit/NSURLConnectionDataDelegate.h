/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLConnectionDataDelegate <NSURLConnectionDelegate>
@optional
-(void)connection:(id)arg1 didReceiveData:(id)arg2;
-(void)connectionDidFinishLoading:(id)arg1;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2;
-(void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2;

@end

