/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:57 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {

	SCD_Struct_NS54 _details;
	NSObject* _originalObservable;
	char _isPriorNotification;
	char _isRetainingObjects;

}
-(void)setOriginalObservable:(id)arg1 ;
-(void)setDetailsNoCopy:(SCD_Struct_NS55)arg1 originalObservable:(id)arg2 ;
-(id)initWithDetailsNoCopy:(SCD_Struct_NS55)arg1 originalObservable:(id)arg2 isPriorNotification:(char)arg3 ;
-(void)retainObjects;
-(void)dealloc;
-(unsigned)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
@end

