/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:22:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString;

@interface NSURLCacheInternal : NSObject {

	unsigned memoryCapacity;
	unsigned diskCapacity;
	NSString* diskPath;
	unsigned currentMemoryUsage;
	unsigned currentDiskUsage;
	CFURLCache* _cacheRef;

}
-(void)dealloc;
-(void)finalize;
@end

