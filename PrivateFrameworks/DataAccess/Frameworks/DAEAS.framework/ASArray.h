/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingWithSubItems.h>
#import <libobjc.A.dylib/ASParsingFrontingBasicType.h>

@class NSMutableArray, NSDictionary;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {

	NSMutableArray* _items;
	NSDictionary* _subclassRuleSet;

}
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
-(id)description;
-(void)addItem:(id)arg1 ;
-(id)initWithSubclassRuleSet:(id)arg1 ;
-(id)commonValue;
-(id)asParseRules;
@end

