//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePagingType.h>

@interface EWSIndexedPageViewType : EWSBasePagingType
{
    long long Offset;
    int BasePoint;
}

+ (id)definition;
@property(nonatomic) int BasePoint; // @synthesize BasePoint;
@property(nonatomic) long long Offset; // @synthesize Offset;

@end

