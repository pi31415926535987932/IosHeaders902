/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLXPCTransaction : NSObject {

	const char* _identifier;

}
+(void)initialize;
+(id)callStackSymbols;
+(void)_startTrackingTransaction:(id)arg1 ;
+(void)_stopTrackingTransaction:(id)arg1 ;
+(void)discardCallStackSymbols:(id)arg1 ;
+(id)openXPCTransactionStatus;
+(id)transaction:(const char*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(const char*)arg1 ;
-(id)_statusDescription;
-(void)stillAlive;
@end

