/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:57 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSLock;

@interface _NSXPCConnectionImportInfo : NSObject {

	unsigned long long _generationCount;
	NSLock* _lock;
	CFDictionaryRef _proxyNumberToCount;
	CFSetRef _knownProxies;

}
-(void)addProxy:(id)arg1 ;
-(char)removeProxy:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

