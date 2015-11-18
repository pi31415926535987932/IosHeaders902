/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:18:54 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	char _primary;

}
-(void)setIsPrimary:(char)arg1 ;
-(void)addType:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)types;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)addTypes:(id)arg1 ;
-(char)isPrimary;
-(id)grouping;
-(void)finalize;
-(void)setGrouping:(id)arg1 ;
@end

