/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface MFMessageWebProtocol : NSURLProtocol
+(void)unregisterFragmentsForUUID:(id)arg1 ;
+(void)registerFragments:(id)arg1 forUUID:(id)arg2 ;
+(void)initialize;
+(char)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(char)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
-(void)dealloc;
-(void)stopLoading;
-(void)startLoading;
@end

