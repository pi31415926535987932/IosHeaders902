/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface TCDumpBinaryToXmlState : NSObject {

	NSString* mCurrentFieldName;
	NSMutableDictionary* mFieldNameToValueMap;

}
-(void)dealloc;
-(id)init;
-(void)setCurrentField:(id)arg1 ;
-(void)cacheValueforCurrentField:(id)arg1 ;
-(id)valueForCurrentField;
-(id)valueForField:(id)arg1 ;
@end

