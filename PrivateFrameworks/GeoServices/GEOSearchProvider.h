/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOSearchProvider : NSObject {

	/*^block*/id _error;

}

@property (nonatomic,copy) id error;              //@synthesize error=_error - In the implementation block
-(id)error;
-(void)cancel;
-(void)dealloc;
-(void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(char)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)setError:(id)arg1 ;
@end

